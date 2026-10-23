/* sub_60811618
 * address: 0x60811618   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60811618(int result, int a2, int a3)
{
  int v4; // r4
  int v5; // r6
  int *v6; // r5
  char v7; // r4
  float v8; // r1
  bool v9; // zf
  int SoundArchive; // r0
  int v11; // r2
  bool v12; // zf
  char v13[9]; // [sp+4h] [bp-3Ch] BYREF
  unsigned __int8 v14; // [sp+Dh] [bp-33h]
  int v15; // [sp+20h] [bp-20h] BYREF
  int v16; // [sp+24h] [bp-1Ch]
  int v17; // [sp+28h] [bp-18h]
  int v18; // [sp+2Ch] [bp-14h]

  v4 = result;
  if ( a2 < 0 )
    return result;
  v15 = 1065353216;
  v16 = 0;
  v17 = 1065353216;
  v18 = 0;
  ((void (__fastcall *)(_DWORD, int *, int, int, _DWORD))loc_6080E034)(FIELD_U32(result, 132), &v15, a3, 4, 0);
  v5 = v4 + 20 * a2;
  v6 = (int *)(v5 + 140);
  result = FIELD_U32(v5, 140);
  if ( !result )
    return result;
  v7 = sub_60808FA4(SoundSystem_instance, FIELD_U32(result, 220));
  if ( (v7 & 1) != 0 )
    goto LABEL_9;
  result = dword_60CC6B68;
  v8 = FIELD_F32(dword_60CC6B68, 20);
  if ( LODWORD(v8) == 3 )
    goto LABEL_9;
  v9 = LODWORD(v8) == 2;
  if ( LODWORD(v8) == 2 )
  {
    result = FIELD_U32(dword_60CC6B68, 16);
    v9 = result == 3;
  }
  if ( v9 )
  {
LABEL_9:
    v8 = *(float *)&v15;
    FIELD_U32(v5, 148) = v15;
    result = *v6;
    if ( *v6 )
      result = sub_608B032C(result, 0, v8);
  }
  if ( (v7 & 2) != 0 )
  {
    SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
    if ( *v6 )
      v11 = *(_DWORD *)(*v6 + 220);
    else
      v11 = -1;
    sub_608A9BC0(SoundArchive, v13, v11);
    result = *v6;
    LODWORD(v8) = v14;
    if ( v16 >= 0 )
    {
      if ( !result )
        goto LABEL_21;
      goto LABEL_20;
    }
    if ( result )
    {
      LODWORD(v8) = v14 + v16;
LABEL_20:
      result = sub_608AF2F4(result, LODWORD(v8));
    }
  }
LABEL_21:
  v12 = (v7 & 4) == 0;
  if ( (v7 & 4) != 0 )
  {
    result = *v6;
    v12 = *v6 == 0;
  }
  if ( !v12 )
    return sub_608B03A8(result, LODWORD(v8));
  return result;
}
