
#ifndef _LCD_H_
#define _LCD_H_

void lcdRenderArrow(uint8_t line);
void lcdRenderString(int slice, uint8_t line, char * string_p);
void lcdRenderGame(ball_t * balls_p, uint8_t * activeBalls_p, uint32_t * striker0_p, uint32_t * striker1_p, uint32_t * bricks_p, uint32_t * specialBricks_p, uint8_t * lives_p, uint16_t * score_p);

void lcdCleanScreen();

void lcdRenderHelpScreen();

#endif /* _LCD_H_ */
