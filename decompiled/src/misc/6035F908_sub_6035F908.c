/* sub_6035F908
 * address: 0x6035F908   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6035F908(int a1)
{
  unsigned int v2; // r0
  int v3; // r0
  int v4; // r0
  int result; // r0
  int *v6; // r4
  int v7; // t1
  int v8; // r1

  v2 = FIELD_U8(a1, 6921);
  FIELD_U32(a1, 80) = v2;
  if ( v2 < 2 )
  {
    v4 = v2 ^ 1;
    FIELD_U32(a1, 80) = v4;
    FIELD_U32(a1, 156) = 0;
    FIELD_U32(a1, 164) = 0;
    FIELD_U32(a1, 160) = dword_60B00DCC[v4];
    CollisionMgr_init((CollisionMgr *)(a1 + 6936), (StateActor *)a1, 0, 0, &stru_60B00140);
    FIELD_U32(a1, 9464) |= 0x40000000u;
    result = FIELD_U32(a1, 9472) | 0x40000000;
    FIELD_U32(a1, 9472) = result;
    return result;
  }
  if ( v2 == 2 )
  {
    FIELD_U32(a1, 156) = 0x40000000;
    FIELD_U32(a1, 160) = -1073741824;
    FIELD_U32(a1, 164) = 0;
    CollisionMgr_init((CollisionMgr *)(a1 + 6936), (StateActor *)a1, &stru_60B0014C, &stru_60B00158, &stru_60B00164);
    FIELD_U32(a1, 9488) |= 0x40000000u;
    v3 = 9480;
    goto LABEL_7;
  }
  if ( v2 == 3 )
  {
    FIELD_U32(a1, 156) = -1073741824;
    FIELD_U32(a1, 160) = -1073741824;
    FIELD_U32(a1, 164) = 0;
    CollisionMgr_init((CollisionMgr *)(a1 + 6936), (StateActor *)a1, &stru_60B0014C, &stru_60B00158, &stru_60B00164);
    FIELD_U32(a1, 9480) |= 0x40000000u;
    v3 = 9488;
LABEL_7:
    *(_DWORD *)(a1 + v3) |= 0x40000000u;
    v7 = FIELD_U32(a1, 9464);
    v6 = (int *)(a1 + 9464);
    v8 = v6[2];
    *v6 = v7 | 0x40008000;
    v6[2] = v8 | 0x40008000;
    return v8 | 0x40008000;
  }
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 160) = 0x40000000;
  return 0x40000000;
}
