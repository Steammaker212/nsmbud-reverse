/* sub_607A3618
 * address: 0x607A3618   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A3618(StageActor *a1, int *a2, int a3, int a4)
{
  int v8; // r0
  int result; // r0

  (*(void (__fastcall **)(StageActor *, sead_ListNode *, int))(FIELD_U32(a1, 0x0).vtable + 144))(a1, a1[2]._.field_20.previous, 1);
  sub_607AA814(a1);
  sub_60767F80(a1, a2, a4);
  a1[17].field_208 = FIELD_U32(a1, 0x6C).x;
  a1[17].field_20C = FIELD_U32(a1, 0x6C).y;
  a1[17].field_210 = FIELD_U32(a1, 0x6C).z;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    (*(void (__fastcall **)(StageActor *, float))(FIELD_U32(a1, 0x0).vtable + 1084))(a1, 3000.0);
  v8 = sub_607C7184(a1);
  if ( v8 )
    return (*(int (__fastcall **)(int, int *, int, int))(*(_DWORD *)v8 + 256))(v8, a2, a3, a4);
  result = sub_60798D7C((int)a1);
  if ( !result )
  {
    sub_6079A758(a1);
    sub_60767E04(a1, (int)a2, a3);
    return sub_607BA828(a1);
  }
  return result;
}
