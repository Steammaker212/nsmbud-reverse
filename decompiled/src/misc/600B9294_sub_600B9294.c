/* sub_600B9294
 * address: 0x600B9294   size: 692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600B9294(int *a1)
{
  int *v2; // r5
  int v3; // r1
  int v4; // r0
  float *v5; // r0
  int v6; // r2
  Vec3 a3; // [sp+14h] [bp-1Ch] BYREF

  a1[1555] = (*(int (__fastcall **)(int *))(*a1 + 208))(a1);
  a1[1547] = (*(int (__fastcall **)(int *))(*a1 + 200))(a1);
  (*(void (__fastcall **)(int *))(*a1 + 252))(a1);
  (*(void (__fastcall **)(int *))(*a1 + 256))(a1);
  v2 = a1 + 1547;
  a3.x = *((float *)a1 + 27) + *((float *)a1 + 143);
  a3.y = *((float *)a1 + 28) + *((float *)a1 + 144);
  a3.z = *((float *)a1 + 29) + *((float *)a1 + 145);
  switch ( a1[1555] )
  {
    case 0:
      v3 = 31;
      goto LABEL_5;
    case 1:
    case 2:
      v3 = 33;
      goto LABEL_5;
    case 3:
      v3 = 34;
LABEL_5:
      LightSource_update1((LightSource *)(a1 + 1528), v3, &a3, 0, 0, 0, 0, 0, 0);
      break;
    default:
      break;
  }
  a1[36] = 1065353216;
  a1[37] = 1065353216;
  a1[38] = 1065353216;
  CollisionMgr_init((CollisionMgr *)(a1 + 162), (StateActor *)a1, &stru_60AF585C, &stru_60AF5868, &stru_60AF5874);
  a1[800] |= 0x40000000u;
  a1[798] |= 0x40000000u;
  a1[794] |= 0x40000000u;
  a1[796] |= 0x40000000u;
  ActiveCollider__init((ActiveCollider *)(a1 + 47), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC9B3C, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 1614), (StageActor *)a1, &stru_60AF5880, (int)(a1 + 1526));
  v4 = *v2;
  if ( (unsigned int)*v2 >= 4 )
    v4 = 0;
  v5 = *(float **)(PlayerMgr_instance + 4 * v4 + 32);
  *((float *)a1 + 1548) = v5[27] + v5[143];
  *((float *)a1 + 1549) = v5[28] + v5[144];
  *((float *)a1 + 1550) = v5[29] + v5[145];
  a1[142] |= 0x80u;
  a1[123] = 0;
  a1[124] = 1092616192;
  a1[125] = 1101004800;
  a1[126] = 1101004800;
  a1[129] = 1107296256;
  a1[130] = 1107296256;
  a1[131] = 1107296256;
  a1[132] = 1107296256;
  a1[800] |= 0x10000800u;
  a1[798] |= 0x10000800u;
  v6 = a1[796];
  a1[794] |= 0x10000800u;
  a1[796] = v6 | 0x10000800;
  (*(void (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C835FC);
  return 1;
}
