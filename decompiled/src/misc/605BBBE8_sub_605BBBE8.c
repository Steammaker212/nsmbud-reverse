/* sub_605BBBE8
 * address: 0x605BBBE8   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BBBE8(int a1)
{
  int v2; // r0
  int *v3; // r5
  float *v4; // r0
  float v5; // s0
  float v6; // s0
  int v7; // r1
  float v8; // s0
  int result; // r0
  _BYTE *v10; // r5

  v3 = (int *)(a1 + 6828);
  v2 = FIELD_U32(a1, 6828);
  if ( v2 )
    *v3 = v2 - 1;
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 6776) + 12));
  v4 = (float *)(a1 + 6808);
  v5 = FIELD_F32(a1, 6808);
  if ( FIELD_U32(a1, 6792) )
  {
    v6 = v5 + -0.1;
    *v4 = v6;
    if ( v6 > 0.0 )
    {
      v7 = LODWORD(v6);
      goto LABEL_11;
    }
    v7 = 0;
  }
  else
  {
    v8 = v5 + 0.1;
    *v4 = v8;
    if ( v8 < 1.0 )
    {
      v7 = LODWORD(v8);
      goto LABEL_11;
    }
    v7 = 1065353216;
  }
  *(_DWORD *)v4 = v7;
LABEL_11:
  FIELD_U32(a1, 6812) = v7;
  FIELD_U32(a1, 6816) = v7;
  result = *v3;
  if ( !*v3 )
  {
    v10 = (_BYTE *)(a1 + 6824);
    if ( ((int (__fastcall *)(int))loc_605BC7F4)(a1) == 1 )
    {
      result = (unsigned __int8)*v10;
      if ( !*v10 )
        return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB078C);
    }
    else
    {
      *v10 = 0;
      return 0;
    }
  }
  return result;
}
