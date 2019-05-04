#ifndef I_BOARD_H_
#define I_BOARD_H_

#include <stdint.h>

namespace Board
{

enum Player : uint8_t
{
    x = 'X',
    y = 'Y',
    empty = ' '
};

class IBoard
{
  public:
    /**
     * @brief Init the Board (draw an empty board).
     */
    virtual void InitBoard() const = 0;

    /**
     * @brief Clear the board.
     */
    virtual void ClearBoard() const = 0;

    /**
     * @brief Set the Player move in the Board.
     *
     * @param row The row of the player.
     * @param col The collume of the player.
     * @param p The player's char.
     *
     * @return true For success.
     * @return false For row or collume out of the Board's limit.
     */
    virtual bool SetPlayer(const uint8_t row, const uint8_t col, const Player p) const = 0;
};

} // namespace Board

#endif // I_BOARD_H_
