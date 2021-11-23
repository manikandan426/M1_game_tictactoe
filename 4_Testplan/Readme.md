# Teat Plan

| Test ID |	Description	                    | Expected_Input                                             |	Expected_Output |	Actual_Output |	Pass/Fail |
| ------- | ------------------------------  | ---------------------------------------------------------  | ---------------  | ------------- | --------- | 
| TID_01 | Mark positions on board          | Player 1 enter a position in the board:1                   |	Updated board with X | Updated board with X |	PASS |
| TID_02 | Mark positions on board          | Player 2 enter a position in the board:2                   |	Updated board with O | Updated board with O |	PASS |
| TID_03 | Player1 three consecutive moves  | Player 1, enter a position in the board: (last)  |	Player 1 win,Congradulations!!! |	Player 1 win,Congradulations!!! |	PASS |
| TID_04 | Player2 three consecutive moves	| Player 2, enter a position in the board: (last)	 | Player 2 win,Congradulations!!! |	Player 2 win,Congradulations!!! |	PASS |
| TID_05 | Draw-match	                      | Player 1, enter a position in the board: (moves completed) | Draw match | Draw match | PASS |
| TID_06 | Position marking	                | Player 1 enter a position in the board:2                   | Invalid move | Invalid move | PASS |
| TID_07 | Position marking	                | Player 1 enter a position in the board:A                   | Invalid move  | Invalid move | PASS |
| TID_08 | Position marking	                | Player 1 enter a position in the board:5.5       | Update board position 5 | Update board position 5 and display invalid | Fail |
