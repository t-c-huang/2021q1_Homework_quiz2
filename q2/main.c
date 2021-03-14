uint16_t func(uint16_t N)
{
    /* change all right side bits to 1 */
    N |= N >> 1;
    N |= N >> X;
    N |= N >> Y;
    N |= N >> Z;

    return (N + 1) >> 1;
}