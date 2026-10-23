/* sub_606D7D78
 * address: 0x606D7D78   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D7D78(float *a1)
{
  int v2; // r7
  _DWORD *v3; // r5
  int v4; // r1
  int v5; // r2
  unsigned int v6; // r0
  int MaskForMovementType; // r0
  float v8; // s2
  float *v9; // r1
  float v10; // s2

  v2 = 0;
  a1[29] = 0.0;
  v3 = a1 + 27;
  v4 = *((_DWORD *)a1 + 28);
  v5 = EnemyCounterMaybe_instance + 248;
  FIELD_F32(EnemyCounterMaybe_instance, 248) = a1[27];
  FIELD_U32(v5, 4) = v4;
  FIELD_U32(v5, 8) = 0;
  v6 = *((_DWORD *)a1 + 6);
  v3[3161] = 3 * ((v6 >> 8) & 0xF) + 5;
  v3[3163] = (unsigned __int8)v6 >> 4;
  v3[3164] = *((_WORD *)v3 - 43) & 3;
  MaskForMovementType = MovementHandler__getMaskForMovementType((int)(v3 + 1499), 3u);
  MovementHandler__link((MovementHandler *)(v3 + 1499), (Vec3 *)v3, MaskForMovementType, *((_BYTE *)v3 - 80));
  MovementHandler__execute((MovementHandler *)(v3 + 1499));
  if ( v3[1511] == 1 && *((_DWORD *)a1 + 1543) != 1 )
  {
    a1[27] = *((float *)v3 + 1499);
    a1[28] = a1[1527];
  }
  v8 = a1[27];
  do
  {
    v9 = &a1[v2 + 1590];
    v2 += 4;
    *(v9 - 2) = v8;
    v10 = v8 + 2.0;
    *(v9 - 1) = a1[28];
    *v9 = v10;
    v8 = v10 + 2.0;
    v9[1] = a1[28];
  }
  while ( v2 != 1600 );
  sub_606D7EA4(a1, 2.0);
  a1[125] = 5000.0;
  a1[126] = 5000.0;
  return 1;
}
