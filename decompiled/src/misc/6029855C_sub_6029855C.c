/* sub_6029855C
 * address: 0x6029855C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6029855C(int a1)
{
  char v1; // r12
  char *v3; // r0
  float v4; // s2
  float v5; // s4
  float v6; // s2

  if ( ((unsigned int)&algn_60C8FF03[9] & ~(1613333880 << v1) & 1) == 0
    && _cxa_guard_acquire((__guard *)&algn_60C8FF03[9]) )
  {
    dword_60C8FF30 = 1094713344;
    dword_60C8FF34 = 1101004800;
    dword_60C8FF38 = 1094713344;
    dword_60C8FF3C = 1101004800;
    dword_60C8FF40 = 1101004800;
    dword_60C8FF44 = 1094713344;
    dword_60C8FF48 = 1101004800;
    dword_60C8FF4C = 1094713344;
    _cxa_guard_release((__guard *)&algn_60C8FF03[9]);
  }
  v3 = &byte_60C8FF00[8 * FIELD_U32(a1, 6668)];
  v4 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v5 = *((float *)v3 + 12) * 0.5;
  if ( FIELD_F32(dword_60CC6484, 40) > (float)(v4 + v5) || (float)(v4 - v5) > FIELD_F32(dword_60CC6484, 48) )
    return 0;
  v6 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  return FIELD_F32(dword_60CC6484, 44) <= (float)(v6 + (float)(*((float *)v3 + 13) * 0.5))
      && (float)(v6 - (float)(*((float *)v3 + 13) * 0.5)) <= FIELD_F32(dword_60CC6484, 52);
}
