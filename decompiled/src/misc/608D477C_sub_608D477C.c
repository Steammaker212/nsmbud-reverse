/* sub_608D477C
 * address: 0x608D477C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D477C(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r7
  int v8; // r0
  int v10; // [sp+0h] [bp-118h] BYREF

  v6 = 1;
  if ( !FIELD_U8(a1, 2) )
  {
    v7 = 0;
    FIELD_U32(a1, 12) = 0;
    FIELD_U32(a1, 16) = 0;
    FIELD_U8(a1, 3) = 0;
    v8 = (*(int (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)a2 + 8))(a2, &v10, 0);
    *(_BYTE *)a1 = v8;
    FIELD_U8(a1, 1) = FIELD_U8(a3, 29);
    if ( v8 != 1 || !FIELD_U32(a1, 4) )
    {
      FIELD_U32(a1, 24) = 0;
      FIELD_U32(a1, 28) = FIELD_U32(a3, 16);
      goto LABEL_7;
    }
    v6 = 0;
    if ( sub_608D4834(a1, 0, a2, a3) == 1 )
    {
      v7 = FIELD_U32(a1, 24);
LABEL_7:
      FIELD_U32(a1, 20) = v7;
      v6 = 1;
      FIELD_U8(a1, 2) = 1;
    }
  }
  return v6;
}
