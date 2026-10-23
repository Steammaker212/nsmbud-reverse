/* sub_6082ED70
 * address: 0x6082ED70   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6082ED70(Actor *a1, ActorBuildInfo *a2)
{
  unsigned int settings1; // r6
  int settigns2; // r7
  float x; // r0
  float y; // r9
  float v8; // s16
  int ProfileId; // r1
  float v10; // s2
  bool v11; // zf
  float v12; // s0
  bool v13; // zf
  char v14; // r0
  char v15; // lr
  char v16; // r9
  bool v17; // zf
  int v18; // r2
  char v20[44]; // [sp+34h] [bp-7Ch] BYREF
  float v21; // [sp+60h] [bp-50h] BYREF
  float v22; // [sp+64h] [bp-4Ch]
  float v23; // [sp+68h] [bp-48h] BYREF
  float v24; // [sp+6Ch] [bp-44h]

  Actor__ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60C2ABB8;
  settings1 = FIELD_U32(a1, 0x14);
  settigns2 = FIELD_U32(a1, 0x18);
  x = FIELD_U32(a2, 0x10).x;
  y = FIELD_U32(a2, 0x10).y;
  v21 = 0.0;
  v22 = 0.0;
  v23 = x;
  v24 = y;
  v8 = x;
  ProfileId = Actor__getProfileId(a1);
  v10 = y;
  v11 = ProfileId == 578;
  v12 = (float)-(float)(settings1 & 0xF0) - (float)(settings1 & 0xF);
  if ( ProfileId != 578 )
    v11 = ProfileId == 579;
  if ( v11 )
    goto LABEL_14;
  v13 = ProfileId == 582;
  if ( ProfileId != 582 )
    v13 = ProfileId == 583;
  if ( v13 )
  {
LABEL_14:
    v17 = ProfileId == 579;
    if ( ProfileId != 579 )
      v17 = ProfileId == 583;
    if ( v17 )
      v23 = v8 + 16.0;
    v14 = (unsigned __int16)settings1 >> 12;
    v15 = BYTE1(settings1) & 0xF;
    v16 = HIBYTE(settings1) & 0xF;
    if ( settings1 >= 0x10000000 )
    {
      v12 = -v12;
      v24 = v10 + 16.0;
    }
    v22 = v12;
  }
  else
  {
    v14 = (unsigned __int16)settings1 >> 12;
    v15 = BYTE1(settings1) & 0xF;
    v16 = HIBYTE(settings1) & 0xF;
    if ( ProfileId == 580 || ProfileId == 581 )
    {
      if ( ProfileId == 580 )
        v24 = v10 + 16.0;
      if ( !(settings1 >> 28) )
      {
        v12 = -v12;
        v23 = v8 + 16.0;
      }
      v21 = v12;
    }
  }
  v18 = settings1 >> 28;
  if ( settings1 >> 28 )
    v18 = 1;
  sub_607FCF48(
    (int)v20,
    ProfileId,
    &v23,
    (int *)&v21,
    v16,
    v15,
    v14,
    settigns2,
    SBYTE1(settigns2),
    (settings1 & 0x10000) != 0,
    (settigns2 & 0x10000000) != 0,
    (settings1 & 0x100000) != 0,
    v18);
  sub_607FC22C(dword_60CC6484);
  FIELD_U8(a1, 0x13) = 1;
  return a1;
}
