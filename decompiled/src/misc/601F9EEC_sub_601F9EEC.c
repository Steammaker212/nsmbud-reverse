/* sub_601F9EEC
 * address: 0x601F9EEC   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_601F9EEC(int a1)
{
  int v1; // r9
  int v2; // r6
  int v3; // r10
  unsigned int v4; // r7
  int v5; // r4
  unsigned int v6; // r5
  int v7; // r0
  float v8; // r5
  float v9; // r6
  float v10; // r11
  char v11; // r8
  _BYTE *result; // r0
  bool v13; // zf
  int v14; // r1
  bool v15; // zf
  ActorBuildInfo v17; // [sp+Ch] [bp-5Ch] BYREF
  int v18; // [sp+38h] [bp-30h] BYREF
  int v19; // [sp+3Ch] [bp-2Ch]
  int v20; // [sp+40h] [bp-28h]

  v1 = 3;
  v2 = 0x80000;
  v3 = 7;
  if ( FIELD_U8(dword_60CC6D78, 28) )
    goto LABEL_2;
  if ( sub_6081F0E0() == 1 )
  {
    v3 = 6;
    if ( sub_6019B268(6u) == 1 )
    {
      if ( !sub_6022CC88(dword_60C8D864, 6, 36) )
      {
        v3 = 7;
        result = (_BYTE *)sub_6019AE00(7u, 0x2Au);
        if ( result )
          return result;
        v1 = 0;
        v4 = 879;
        goto LABEL_3;
      }
      v1 = 13;
      v2 = 0x200000;
      goto LABEL_2;
    }
    if ( sub_6081F0B8(dword_60CC6D78) != 1 || sub_6019B268(4u) != 1 )
    {
      result = (_BYTE *)dword_60CC6D78;
      v3 = FIELD_U32(dword_60CC6D78, 456);
      if ( v3 == -1 )
        return result;
      v14 = FIELD_U32(dword_60CC6D78, 460);
      v15 = v14 == -1;
      if ( v14 != -1 )
      {
        result = *(_BYTE **)(dword_60CC6D78 + 464);
        v15 = result + 1 == 0;
      }
      if ( v15 )
        return result;
      v2 = 0x200000;
      v1 = 12;
      if ( v3 == 4 )
      {
        v2 = 0x100000;
        v1 = 10;
      }
      goto LABEL_2;
    }
    v3 = 6;
    v13 = sub_6022CC88(dword_60C8D864, 4, 36) == 0;
    v2 = 0x200000;
    v1 = 12;
    goto LABEL_24;
  }
  v1 = 0;
  v4 = 878;
  if ( sub_6081F0B8(dword_60CC6D78) != 1 )
    goto LABEL_3;
  v3 = 4;
  if ( sub_6019B268(4u) == 1 )
  {
    v1 = sub_6022CC88(dword_60C8D864, 4, 36);
    v3 = 7;
    v2 = 0x80000;
    v13 = v1 == 0;
LABEL_24:
    if ( !v13 )
    {
      v3 = 4;
      v2 = 0x100000;
      v1 = 11;
    }
    goto LABEL_2;
  }
  v1 = 10;
  v2 = 0x100000;
LABEL_2:
  v4 = 878;
LABEL_3:
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v5 = sub_601A443C(dword_60C89E18, v3, 0);
  if ( FIELD_S32(v5, 28) >= 1 )
  {
    v6 = 0;
    while ( !sub_60183054(v5, v6, v2) )
    {
      if ( (signed int)++v6 >= FIELD_U32(v5, 28) )
        goto LABEL_13;
    }
    v18 = v3;
    v19 = 0;
    v20 = v6;
  }
LABEL_13:
  v7 = sub_601E0040((int)&v18);
  v8 = *(float *)v7;
  v9 = FIELD_F32(v7, 4);
  v10 = FIELD_F32(v7, 8);
  v11 = v20;
  sub_6019EC34((_DWORD *)(dword_60CC6D78 + 456), &v18);
  memset(&v17.settings2, 0, 40);
  v17.settings1 = v1;
  v17.eventId2 = v3;
  v17.field_20 = 0;
  v17.movementId = v11;
  v17.position.x = v8;
  v17.position.y = v9;
  v17.position.z = v10;
  v17.profile = Profile__get(v4);
  result = ActorMgr__create((void *)ActorMgr__instance, &v17, 0);
  if ( result )
  {
    if ( v4 == 878 )
    {
      result = *((_BYTE **)result + 2);
      FIELD_U32(a1, 16) = result;
    }
    else
    {
      result = *((_BYTE **)result + 2);
      FIELD_U32(a1, 20) = result;
    }
  }
  return result;
}
