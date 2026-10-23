/* LightMapMgr_ref_42748C
 * address: 0x6042748C   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LightMapMgr_ref_42748C(_DWORD *a1)
{
  int *v2; // r0
  int v3; // r8
  int *v4; // r0
  int v5; // r8
  int (**v7)(); // [sp+4h] [bp-2Ch] BYREF
  const char *v8; // [sp+8h] [bp-28h]

  v2 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 2u )
    v2 += 2;
  v3 = *v2;
  v7 = &sead__SafeStringBase__vtable;
  v8 = "LightMapMgr";
  a1[1717] = a1;
  a1[1718] = sub_604275C8;
  a1[1719] = 0;
  a1[1716] = off_60BFA430;
  sead__SafeStringBase__operator_assign((int)(a1 + 1711), (int)&v7);
  a1[1713] = 2;
  sub_609553AC(v3, a1 + 1707);
  v4 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 4u )
    v4 += 4;
  v5 = *v4;
  v7 = &sead__SafeStringBase__vtable;
  v8 = "LightMapMgr";
  a1[1700] = a1;
  a1[1701] = sub_60427770;
  a1[1702] = 0;
  a1[1699] = off_60BFA430;
  sead__SafeStringBase__operator_assign((int)(a1 + 1694), (int)&v7);
  a1[1696] = 2;
  return sub_609553AC(v5, a1 + 1690);
}
