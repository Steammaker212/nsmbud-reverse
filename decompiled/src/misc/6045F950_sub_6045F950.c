/* sub_6045F950
 * address: 0x6045F950   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045F950(int a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r5
  float v5; // r0
  int v6; // r1
  float v7; // s0

  v2 = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 212))(a1);
  FIELD_U32(a1, 6672) = 14;
  FIELD_U32(a1, 6676) = 0;
  if ( FIELD_U32(a1, 6184) < 4u )
    v2 = FIELD_U32(a1, 6184);
  v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 48);
  if ( ((unsigned int)&dword_60C7B37C & ~(1615198656 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378) == 1 )
  {
    v5 = FIELD_F32(v4, 108);
    FIELD_F32(a1, 108) = v5;
    v6 = FIELD_U32(v4, 1216);
    if ( (v6 & 0x2000) != 0 )
    {
      v7 = -20.0;
    }
    else
    {
      if ( (v6 & 0x1000) == 0 )
      {
LABEL_13:
        FIELD_F32(a1, 112) = FIELD_F32(dword_60CC6484, 124) + -48.0;
        goto LABEL_14;
      }
      v7 = 20.0;
    }
    FIELD_F32(a1, 108) = v5 + v7;
    goto LABEL_13;
  }
LABEL_14:
  FIELD_U32(a1, 116) = 1167867904;
  return 1167867904;
}
