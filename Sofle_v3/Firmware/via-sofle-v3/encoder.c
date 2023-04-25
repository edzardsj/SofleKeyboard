/* Copyright 2020 Josef Adamcik
 * Modification for VIA support and RGB underglow by Jens Bonk-Wiltfang
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef ENCODER_ENABLE

// Setting up what encoder rotation does.
// If your encoder can be pressed as a button, that function can be set in Via.
const uint16_t encoder_functions[3][2][2] = {
    {{KC_VOLD, KC_VOLU},{KC_NO, KC_TAB}},
    {{KC_NO, KC_NO},{KC_LEFT, KC_RGHT}},
    {{KC_PGUP, KC_PGDN},{KC_NO, KC_NO}}
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    uint8_t direction = clockwise ? 1 : 0;
    if(IS_LAYER_ON(2)){
        tap_code(encoder_functions[1][index][direction]);
        return true;
    }
    else if(IS_LAYER_ON(3)){
        tap_code(encoder_functions[2][index][direction]);
        return true;
    }

    // default (Layer 0+1) otherwise
    else if (!clockwise && index == 1){
        register_code(KC_LSFT);
        tap_code(KC_TAB);
        unregister_code(KC_LSFT);
        return true;
    }

    tap_code(encoder_functions[0][index][direction]);
    return true;
}

#endif
