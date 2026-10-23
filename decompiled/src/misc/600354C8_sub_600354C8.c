/* sub_600354C8
 * address: 0x600354C8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600354C8(int a1)
{
  int v2; // r5
  bool v3; // zf
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r0

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  v3 = v2 == (*(int (**)(void))(dword_60C7FEDC + 8))();
  v4 = 0;
  if ( v3 )
    v4 = *(_DWORD *)(FIELD_U32(a1, 7244) + 160);
  FIELD_U32(a1, 7648) = v4;
  FIELD_U32(a1, 7792) = *(_DWORD *)(FIELD_U32(a1, 7624) + 11468) ^ 1;
  FIELD_U32(a1, 7772) = 1;
  FIELD_U8(a1, 7785) = 0;
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1);
  v6 = 60;
  if ( !v5 )
  {
    v7 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
    v6 = 30;
    if ( v7 )
      v6 = 60;
  }
  FIELD_U32(a1, 7776) = v6;
  return 7776;
}
