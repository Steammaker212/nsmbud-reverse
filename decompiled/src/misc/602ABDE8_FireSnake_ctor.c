/* FireSnake_ctor
 * address: 0x602ABDE8   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall FireSnake_ctor(Enemy *a1, ActorBuildInfo *a2)
{
  int v3; // r3
  int *p_settings1; // r0
  char *v5; // r6

  Enemy__ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60BE3208;
  a1[1]._._._._.vtable = 0;
  LOBYTE(a1[1]._._._._.heap) = 1;
  memset(&a1[1]._._._._.id, 0, 0x1EC);
  LightMask__ctor((RevealMaskRelated *)&a1[1]._._._.field_204);
  LightSource__ctor((LightSource *)&a1[1]._._._.field_22C);
  a1[1]._._.field_284 = 0;
  a1[1]._._._.field_280 = 0;
  a1[1]._._._.field_27C = 0.0;
  a1[1]._._._.field_278 = 0;
  a1[1]._._._.field_274 = 0;
  *(_DWORD *)a1[1]._._.collisionMgr = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[4] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[8] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[12] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[16] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[20] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[24] = 0;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._._.collisionMgr[28]);
  *(_DWORD *)&a1[1]._._.collisionMgr[28] = off_60BC1450;
  *(_DWORD *)&a1[1]._._.collisionMgr[184] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[188] = -1;
  EffectData_ctor((EffectData *)&a1[1]._._.collisionMgr[132]);
  sub_602A8564(&a1[1]._._.collisionMgr[196], FIELD_U32(a1, 0x8));
  *(_DWORD *)&a1[1]._._.collisionMgr[196] = off_60BE34AC;
  sub_602A40A0(&a1[1]._._.collisionMgr[232], FIELD_U32(a1, 0x8));
  *(_DWORD *)&a1[1]._._.collisionMgr[232] = off_60BE34E0;
  *(_DWORD *)&a1[1]._._.collisionMgr[280] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[284] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[288] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[292] = 1065353216;
  memset(&a1[1]._._.collisionMgr[296], 0, 40);
  a1[1]._._.collisionMgr[336] = 1;
  *(_DWORD *)&a1[1]._._.collisionMgr[340] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[344] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[348] = &ActorScaler_vtable;
  *(_DWORD *)&a1[1]._._.collisionMgr[352] = 1065353216;
  *(_DWORD *)&a1[1]._._.collisionMgr[356] = 1065353216;
  *(_DWORD *)&a1[1]._._.collisionMgr[360] = 1065353216;
  *(_DWORD *)&a1[1]._._.collisionMgr[364] = 1065353216;
  *(_DWORD *)&a1[1]._._.collisionMgr[368] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[372] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[376] = a1;
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._._.collisionMgr[380]);
  v3 = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[684] = off_60BE3504;
  p_settings1 = &a1[1]._._._._.settings1;
  while ( 1 )
  {
    v5 = (char *)&p_settings1[v3];
    *(v5 - 4) = 0;
    *((_DWORD *)v5 - 3) = 0;
    *((_DWORD *)v5 - 2) = 0;
    if ( v3 == 120 )
      break;
    v5[8] = 0;
    p_settings1[v3] = 0;
    *((_DWORD *)v5 + 1) = 0;
    v3 += 6;
  }
  a1[1]._._._.field_200 = 0;
  a1[1]._._._.field_1FC = 0.0;
  a1[1]._._._.field_1F8 = 0.0;
  a1[1]._._._.field_1F4 = 0.0;
  return a1;
}
