/* sub_6045FAA8
 * address: 0x6045FAA8   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045FAA8(int a1)
{
  char v1; // r12
  unsigned int v3; // r0
  int v4; // r5
  float v5; // r0
  int v6; // r1
  float v7; // s0
  int result; // r0
  int v9; // r1
  int v10; // r1
  int v11; // r3

  FIELD_U32(a1, 6208) = -1;
  v3 = FIELD_U32(a1, 6184);
  if ( v3 >= 4 )
    v3 = 0;
  v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 48);
  if ( ((unsigned int)&dword_60C7B37C & ~(1615198960 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
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
  result = a1 + 6672;
  v9 = FIELD_U32(a1, 6672);
  if ( !v9 || (v10 = v9 - 1, (*(_DWORD *)result = v10) == 0) )
  {
    v11 = FIELD_U32(a1, 6676);
    FIELD_U32(a1, 6676) = v11 + 1;
    *(_DWORD *)result = 14;
    if ( v11 < 5 )
    {
      result = (((_BYTE)v11 + 1) & 1) == 0;
      FIELD_U8(a1, 535) = result;
    }
    else
    {
      FIELD_U8(a1, 535) = 1;
      FIELD_U32(a1, 116) = 1143111680;
      FIELD_U8(a1, 6056) = 1;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9D2F8);
    }
  }
  return result;
}
