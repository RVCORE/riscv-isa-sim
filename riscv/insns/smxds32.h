require_rv64;
require_extension('P');

sreg_t mres0 = (sreg_t)P_SW(RS1, 0) * P_SW(RS2, 1);
sreg_t mres1 = (sreg_t)P_SW(RS1, 1) * P_SW(RS2, 0);

WRITE_RD(mres1 - mres0);
