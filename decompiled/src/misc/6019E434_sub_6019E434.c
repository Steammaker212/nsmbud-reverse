/* sub_6019E434
 * address: 0x6019E434   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6019E434(int a1)
{
  int v2; // r6
  float v3; // s16
  unsigned int v4; // r7
  float v5; // s18
  float v6; // s20
  float *v7; // r0
  _BYTE *v8; // r0
  int v9; // r6
  float v10; // s16
  unsigned int v11; // r7
  float v12; // s18
  float v13; // s20
  float *v14; // r0
  _BYTE *result; // r0
  ActorBuildInfo v16; // [sp+0h] [bp-70h] BYREF
  int v17; // [sp+2Ch] [bp-44h] BYREF
  int v18; // [sp+30h] [bp-40h]
  unsigned int v19; // [sp+34h] [bp-3Ch]

  memset(&v16, 0, sizeof(v16));
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v2 = sub_601A443C(dword_60C89E18, 3, 0);
  v3 = 0.0;
  if ( FIELD_S32(v2, 28) < 1 )
  {
LABEL_5:
    v5 = 0.0;
    v6 = 0.0;
  }
  else
  {
    v4 = 0;
    while ( !sub_60183070(v2, v4, 4) )
    {
      if ( (signed int)++v4 >= FIELD_U32(v2, 28) )
        goto LABEL_5;
    }
    v17 = 3;
    v18 = 0;
    v19 = v4;
    v7 = (float *)sub_601DFFE4(&v17);
    v6 = v7[18];
    v5 = v7[19];
    v3 = v7[20];
  }
  v16.settings1 = 0;
  v16.profile = Profile__get(0x389u);
  v16.position.x = v6;
  v16.position.y = v5;
  v16.position.z = v3;
  v16.field_1C = 0;
  v16.field_20 = 0;
  v16.eventId2 = 3;
  v8 = ActorMgr__create((void *)ActorMgr__instance, &v16, 0);
  if ( v8 )
    FIELD_U32(a1, 544) = *((_DWORD *)v8 + 2);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v9 = sub_601A443C(dword_60C89E18, 5, 0);
  v10 = 0.0;
  if ( FIELD_S32(v9, 28) < 1 )
  {
LABEL_13:
    v12 = 0.0;
    v13 = 0.0;
  }
  else
  {
    v11 = 0;
    while ( !sub_60183070(v9, v11, 4) )
    {
      if ( (signed int)++v11 >= FIELD_U32(v9, 28) )
        goto LABEL_13;
    }
    v17 = 5;
    v18 = 0;
    v19 = v11;
    v14 = (float *)sub_601DFFE4(&v17);
    v13 = v14[18];
    v12 = v14[19];
    v10 = v14[20];
  }
  v16.settings1 = 0;
  v16.profile = Profile__get(0x389u);
  v16.position.x = v13;
  v16.position.y = v12;
  v16.position.z = v10;
  v16.field_1C = 0;
  v16.field_20 = 0;
  v16.eventId2 = 5;
  result = ActorMgr__create((void *)ActorMgr__instance, &v16, 0);
  if ( result )
  {
    result = *((_BYTE **)result + 2);
    FIELD_U32(a1, 548) = result;
  }
  return result;
}
