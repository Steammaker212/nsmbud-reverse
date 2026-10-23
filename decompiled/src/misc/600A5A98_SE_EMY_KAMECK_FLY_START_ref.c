/* SE_EMY_KAMECK_FLY_START_ref
 * address: 0x600A5A98   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KAMECK_FLY_START_ref(int a1)
{
  int *v2; // r5
  unsigned int v3; // r3
  int v4; // r1
  float v5; // s0
  int result; // r0

  v2 = (int *)(a1 + 7096);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  sub_6081356C(a1 + 6332, "SE_EMY_KAMECK_FLY_START", FIELD_S16(a1, 6640), 0);
  v3 = *(_DWORD *)(*v2 + 68);
  v4 = *(_DWORD *)(*v2 + 12);
  if ( *(_DWORD *)(*v2 + 8) > v3 )
    v4 += 4 * v3;
  if ( (*(_BYTE *)(*(_DWORD *)v4 + 28) & 0x20) != 0 )
    sub_60421AD4(*v2);
  v5 = FIELD_F32(a1, 108);
  result = dword_60CC6484;
  if ( v5 > (float)(FIELD_F32(dword_60CC6484, 120) + 32.0) || v5 < (float)(FIELD_F32(dword_60CC6484, 112) + -32.0) )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C82CB8);
  return result;
}
