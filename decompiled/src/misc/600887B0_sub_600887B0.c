/* sub_600887B0
 * address: 0x600887B0   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600887B0(int a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r0
  _DWORD *v5; // r0
  float v6; // s2
  float v7; // s0
  float v8; // s0

  v2 = FIELD_U32(a1, 7244);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U8(a1, 7248) == 0;
  if ( v3 )
  {
    v6 = FIELD_F32(a1, 108);
    v7 = FIELD_F32(dword_60CC6484, 208) + -128.0;
    if ( v6 >= v7 )
    {
      v8 = FIELD_F32(dword_60CC6484, 216) + 128.0;
      if ( v6 > v8 )
        FIELD_F32(a1, 108) = v8;
    }
    else
    {
      FIELD_F32(a1, 108) = v7;
    }
  }
  else
  {
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1028))(a1);
    v5 = (_DWORD *)sub_600D1798(v4);
    FIELD_U32(a1, 108) = *v5;
    FIELD_U32(a1, 112) = v5[1];
    FIELD_U32(a1, 116) = v5[2];
  }
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( !FIELD_U32(a1, 320) )
    sub_600CE6A4(a1);
  return 1;
}
