/* sub_6019F1BC
 * address: 0x6019F1BC   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019F1BC(int a1, int a2, int a3)
{
  int v5; // r7
  _DWORD *v6; // r0
  int v7; // r6
  int v8; // r0
  _DWORD v10[67]; // [sp+0h] [bp-158h] BYREF
  int v11; // [sp+10Ch] [bp-4Ch] BYREF
  const char *v12; // [sp+110h] [bp-48h]

  v5 = a2 + 1;
  v6 = sub_6017D524(&v11, "CS_W%d", a2 + 1);
  (*(void (__fastcall **)(_DWORD *))(v11 + 12))(v6);
  sub_6017D5C0(v10, "Model/%s%s.szs", v12, ".Nin_NX_NVN");
  if ( !a3 && sub_60822378(ArchiveManagerMaybe_instance, v10)
    || (sub_608FDDF4((int)&v11, "CS_W%d%c", v5, a3 + 97),
        (*(void (__fastcall **)(int *))(v11 + 12))(&v11),
        sub_608FDDF4((int)v10, "Model/%s%s.szs", v12, ".Nin_NX_NVN"),
        v7 = 0,
        sub_60822378(ArchiveManagerMaybe_instance, v10) == 1) )
  {
    v7 = operator_new(0x734u);
    v8 = sub_60221EB8(v7, &v11);
    s_Trap_ref(v8, a2, a3);
  }
  return v7;
}
