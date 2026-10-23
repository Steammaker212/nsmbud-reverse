/* sub_606B67E8
 * address: 0x606B67E8   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B67E8(_DWORD *a1, int a2)
{
  _DWORD *v4; // r7
  _DWORD *v5; // r8
  int v6; // r1
  int v7; // r1
  int v8; // r2
  unsigned int v9; // r0
  _DWORD v11[2]; // [sp+0h] [bp-30h] BYREF
  int (**v12)(); // [sp+8h] [bp-28h] BYREF
  const char *v13; // [sp+Ch] [bp-24h]

  v4 = a1 + 1526;
  v5 = (_DWORD *)a1[1526];
  v6 = a1[1537];
  v12 = &sead__SafeStringBase__vtable;
  if ( v6 )
    v13 = "met_pataBig";
  else
    v13 = "met_pata";
  v7 = LoadResource(ResourceMgrRelated_instance, &v12);
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = off_60C1B084[a2];
  sub_60421938(v5, v7, (int)v11);
  v8 = *(_DWORD *)(*v4 + 12);
  v9 = *(_DWORD *)(*v4 + 68);
  if ( *(_DWORD *)(*v4 + 8) > v9 )
    v8 += 4 * v9;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), dword_60B08754[a2]);
  a1[1542] = a2;
  return 6168;
}
