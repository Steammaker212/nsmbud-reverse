/* ibaramushi_ref_2E6E24
 * address: 0x602E6E24   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall ibaramushi_ref_2E6E24(_DWORD **a1, int a2, int a3, float a4, float a5)
{
  int v8; // r0
  int Resource; // r0
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  _DWORD v14[2]; // [sp+0h] [bp-30h] BYREF
  _DWORD v15[10]; // [sp+8h] [bp-28h] BYREF

  v14[0] = &sead__SafeStringBase__vtable;
  v8 = FIELD_U32(a2, 4);
  v15[0] = &sead__SafeStringBase__vtable;
  v14[1] = v8;
  v15[1] = "ibaramushi";
  Resource = LoadResource(ResourceMgrRelated_instance, v15);
  sub_60421938(*a1, Resource, (int)v14);
  v10 = (*a1)[3];
  v11 = (*a1)[17];
  if ( (*a1)[2] > v11 )
    v10 += 4 * v11;
  *(float *)(*(_DWORD *)v10 + 24) = a5;
  v12 = (*a1)[3];
  v13 = (*a1)[17];
  if ( (*a1)[2] > v13 )
    v12 += 4 * v13;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), a3);
}
