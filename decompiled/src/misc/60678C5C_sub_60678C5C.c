/* sub_60678C5C
 * address: 0x60678C5C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60678C5C(int a1)
{
  _BOOL4 v2; // r1
  _BOOL4 result; // r0
  _BYTE *v4; // r5
  float *v5; // r0
  float v6; // s2
  float v7; // s0
  float v8; // s2
  int v9; // r1
  int v10; // r0

  v2 = sub_605D8184(a1);
  result = 0;
  if ( v2 )
  {
    FIELD_U8(a1, 8528) = -1;
    v4 = (_BYTE *)(a1 + 8528);
    if ( sub_6068C438(MaskMgr_instance) != 1
      || (v5 = *(float **)(a1 + 8052)) == 0
      || (v6 = v5[3], v7 = v5[2] * 0.5, FIELD_F32(dword_60CC6484, 40) > (float)(v6 + v7))
      || (float)(v6 - v7) > FIELD_F32(dword_60CC6484, 48)
      || (v8 = v5[4], FIELD_F32(dword_60CC6484, 44) > (float)(v8 + v7))
      || (float)(v8 - v7) > FIELD_F32(dword_60CC6484, 52) )
    {
      *v4 &= 0xFCu;
    }
    v9 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 124))(a1);
    v10 = (unsigned __int8)*v4;
    if ( v9 == 1 )
    {
      v10 &= 0xFBu;
      *v4 = v10;
    }
    return v10 != 0;
  }
  return result;
}
