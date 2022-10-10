#include "qp.h"
#include QMK_KEYBOARD_H


#define LCD_RST_PIN LINE_PIN6
#define LCD_CS_PIN LINE_PIN9
#define LCD_DC_PIN LINE_PIN10
#ifndef LCD_ACTIVITY_TIMEOUT
#    define LCD_ACTIVITY_TIMEOUT 30000
#endif

painter_device_t lcd;


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_ortho_1x1(KC_A)
};

void keyboard_post_init_kb(void) {


    // Turn on the LCD
    // setPinOutput(LCD_POWER_ENABLE_PIN);
    // writePinHigh(LCD_POWER_ENABLE_PIN);

    // Let the LCD get some power...
    wait_ms(150);

    // Initialise the LCD
    lcd = qp_ili9341_make_spi_device(320, 240, LCD_CS_PIN, LCD_DC_PIN, LCD_RST_PIN, 4, 0);
    qp_init(lcd, QP_ROTATION_0);

    // Turn on the LCD and clear the display

    qp_power(lcd, true);
    qp_rect(lcd, 0, 0, 239, 319, 128, 255, 255, true);

    // Turn on the LCD backlight
    //backlight_enable();
    //backlight_level(BACKLIGHT_LEVELS);

    // Allow for user post-init
    keyboard_post_init_user();
}
