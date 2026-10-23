/* sub_6005186C
 * address: 0x6005186C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6005186C(int a1, int a2, int a3)
{
  int v5; // r6
  int v6; // t1
  int *v7; // r0
  int v8; // r7
  int ResArchiveById; // r0
  int v10; // r0

  v6 = FIELD_U32(a1, 7204);
  v5 = a1 + 7204;
  v7 = *(int **)(v6 + 28);
  if ( FIELD_U32(v6, 24) > 2u )
    v7 += 2;
  v8 = *v7;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(v5 - 7192), 0);
  sub_60446088(v8, ResArchiveById, a2);
  v10 = *(_DWORD *)(*(_DWORD *)v5 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 24) > 2u )
    v10 += 8;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), a3);
}
