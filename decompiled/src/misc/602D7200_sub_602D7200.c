/* sub_602D7200
 * address: 0x602D7200   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_602D7200(int a1)
{
  _DWORD *v2; // r5
  int v3; // r9
  unsigned int v4; // r2
  int v5; // r0
  int v6; // r0
  char *v7; // r0
  int i; // r1
  int j; // r1
  char *result; // r0
  int k; // r1
  int ResArchiveById; // r1
  const char *v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  int v16; // r1
  unsigned int v17; // r0
  int (**v18)(); // [sp+0h] [bp-30h] BYREF
  char *v19; // [sp+4h] [bp-2Ch]
  _DWORD v20[10]; // [sp+8h] [bp-28h] BYREF

  v3 = a1 + 6856;
  v2 = *(_DWORD **)(a1 + 6856);
  v4 = v2[17];
  v5 = v2[3];
  if ( v2[2] > v4 )
    v5 += 4 * v4;
  v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v5 + 100) + 16);
  v18 = &sead__SafeStringBase__vtable;
  v7 = (char *)(v6 + 2);
  v19 = v7;
  if ( v7 == "return" )
  {
LABEL_19:
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v20[0] = &sead__SafeStringBase__vtable;
    v13 = "down";
LABEL_21:
    v20[1] = v13;
    sub_60421938(v2, ResArchiveById, (int)v20);
    v14 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v15 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v15 )
      v14 += 4 * v15;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v14 + 4), 0);
    v16 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v17 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v17 )
      v16 += 4 * v17;
    result = *(char **)v16;
    *(_DWORD *)(*(_DWORD *)v16 + 24) = 1065353216;
    return result;
  }
  for ( i = 0; i < 524289; ++i )
  {
    if ( v7[i] != aReturn[i] )
      break;
    if ( !v7[i] )
      goto LABEL_19;
  }
  if ( v7 == "down_wait" )
    goto LABEL_20;
  for ( j = 0; j < 524289; ++j )
  {
    if ( v7[j] != aDownWait[j] )
      break;
    if ( !v7[j] )
      goto LABEL_20;
  }
  sead__SafeStringBase__assureTerminationImpl_const();
  ((void (__fastcall *)(int (***)()))v18[3])(&v18);
  result = v19;
  if ( v19 == "bound" )
  {
LABEL_20:
    v2 = *(_DWORD **)v3;
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v20[0] = &sead__SafeStringBase__vtable;
    v13 = "bound";
    goto LABEL_21;
  }
  for ( k = 0; k < 524289; ++k )
  {
    if ( v19[k] != aBound[k] )
      break;
    if ( !v19[k] )
      goto LABEL_20;
  }
  return result;
}
