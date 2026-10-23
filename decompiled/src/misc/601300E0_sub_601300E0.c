/* sub_601300E0
 * address: 0x601300E0   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601300E0(int a1)
{
  int v1; // r4
  int v2; // r6
  int ResArchiveById; // r0
  int *v4; // r1
  float result; // s0
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "move";
  v1 = a1 + 6104;
  sub_60421AD4(FIELD_U32(a1, 6104));
  v2 = **(_DWORD **)(*(_DWORD *)v1 + 20);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(v1 - 6092), 0);
  TexAnim_play(v2, ResArchiveById, v6);
  v4 = dword_601301BC;
  if ( *(_DWORD *)(v1 - 6024) == 1 )
    v4 = &dword_601301BC[1];
  *(_DWORD *)(v1 - 5984) = *v4;
  FIELD_U32(v1, 132) = 0x40000000;
  result = *(float *)(v1 - 5992) + -16.0;
  FIELD_F32(v1, 136) = result;
  return result;
}
