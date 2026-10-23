/* sub_605EC9A0
 * address: 0x605EC9A0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EC9A0(int a1)
{
  int result; // r0
  __int16 v3; // r1
  int v4; // t1
  bool v5; // zf
  __int16 v6; // r1
  int v7; // r1
  int v8; // r0
  int v9; // r2

  v4 = FIELD_U16(a1, 6600);
  result = a1 + 6600;
  v3 = v4;
  v5 = v4 == 0;
  if ( v4 )
  {
    v6 = v3 - 1;
    *(_WORD *)result = v6;
    result = 0xFFFF;
    v5 = v6 == 0;
  }
  if ( v5 )
  {
    v7 = FIELD_U32(a1, 108);
    v8 = FIELD_U32(a1, 6568);
    FIELD_U32(a1, 112) = v8;
    v9 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 584) = v7;
    FIELD_U32(a1, 588) = v8;
    FIELD_U32(a1, 592) = v9;
    FIELD_U32(a1, 608) = v7;
    FIELD_U32(a1, 612) = v8;
    FIELD_U32(a1, 616) = v9;
    sub_60160948((_DWORD *)(a1 + 6104));
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB1DBC);
  }
  return result;
}
