/* challenge_replay_ref
 * address: 0x6045217C   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall challenge_replay_ref(int a1, int a2, _DWORD *a3, void *a4)
{
  int v7; // r0
  int v8; // r0
  char *v9; // r0
  int i; // r2
  int v11; // r0
  int v12; // r0
  unsigned int v13; // r0
  unsigned int U32; // r0
  unsigned int v15; // r0
  unsigned int v16; // r0
  signed int v17; // r0
  signed int v18; // r1
  signed int v19; // r2
  signed int v20; // r3
  _DWORD *v21; // r0

  FIELD_U32(a1, 1316) = a2;
  FIELD_U8(a1, 1356) = 0;
  FIELD_U32(a1, 1288) = 0;
  FIELD_U32(a1, 1292) = 0;
  FIELD_U32(a1, 1296) = 0;
  FIELD_U32(a1, 1300) = 0;
  FIELD_U32(a1, 1304) = 0;
  FIELD_U32(a1, 1308) = 0;
  FIELD_U32(a1, 1312) = 0;
  FIELD_U32(a1, 1284) = 0;
  v7 = FIELD_U32(a1, 1316);
  switch ( v7 )
  {
    case 2:
      v8 = operator_new_8DE25C(0xECu, a4, 4);
      FIELD_U32(a1, 1388) = sub_60455CB8(v8);
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v9 = (char *)a3[1];
      if ( v9 == "challenge_replay" )
      {
LABEL_13:
        sub_60455E7C(FIELD_U32(a1, 1388), a4);
      }
      else
      {
        for ( i = 0; i <= 0x80000; ++i )
        {
          if ( v9[i] != aChallengeRepla[i] )
            break;
          if ( !v9[i] )
            goto LABEL_13;
        }
        sub_60455D54(FIELD_U32(a1, 1388), a3, a4, "challenge_replay");
      }
      sub_60455EF4(FIELD_U32(a1, 1388));
      sub_60452470(a1);
      break;
    case 1:
      v11 = operator_new_8DE25C(0xECu, a4, 4);
      v12 = sub_60455CB8(v11);
      FIELD_U32(a1, 1388) = v12;
      sub_60455E7C(v12, a4);
      break;
    case 0:
      FIELD_U32(a1, 1388) = 0;
      break;
  }
  operator_new_8DE25C(0x194u, a4, 4);
  FIELD_U32(a1, 1264) = sub_6045BF30();
  operator_new_8DE25C(0x194u, a4, 4);
  FIELD_U32(a1, 1268) = sub_6045BF30();
  operator_new_8DE25C(0x194u, a4, 4);
  FIELD_U32(a1, 1272) = sub_6045BF30();
  operator_new_8DE25C(0x194u, a4, 4);
  FIELD_U32(a1, 1276) = sub_6045BF30();
  operator_new_8DE25C(0x194u, a4, 4);
  FIELD_U32(a1, 1280) = sub_6045BF30();
  v13 = FIELD_U32(a1, 1316);
  if ( v13 >= 2 )
  {
    if ( v13 != 2 )
      goto LABEL_37;
    v21 = *(_DWORD **)(a1 + 1388);
    v18 = v21[7];
    if ( !v18 )
      v18 = 1;
    FIELD_U32(a1, 1324) = v18;
    v19 = v21[8];
    if ( !v19 )
      v19 = 1;
    FIELD_U32(a1, 1328) = v19;
    v20 = v21[9];
    if ( !v20 )
      v20 = 1;
    FIELD_U32(a1, 1332) = v20;
    v17 = v21[10];
    if ( !v17 )
      v17 = 1;
    FIELD_U32(a1, 1336) = v17;
  }
  else
  {
    U32 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
    if ( !U32 )
      U32 = 1;
    FIELD_U32(a1, 1324) = U32;
    v15 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
    if ( !v15 )
      v15 = 1;
    FIELD_U32(a1, 1328) = v15;
    v16 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
    if ( !v16 )
      v16 = 1;
    FIELD_U32(a1, 1332) = v16;
    v17 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
    if ( !v17 )
      v17 = 1;
    FIELD_U32(a1, 1336) = v17;
    v18 = FIELD_U32(a1, 1324);
    v19 = FIELD_U32(a1, 1328);
    v20 = FIELD_U32(a1, 1332);
  }
  sead__Random__init_90EC14((signed int *)(a1 + 1340), v18, v19, v20, v17);
  if ( FIELD_U32(a1, 1316) == 1 )
  {
    sub_604528CC(a1);
    sub_60456064(FIELD_U32(a1, 1388));
  }
LABEL_37:
  if ( FIELD_U32(dword_60C99DD4, 764) == 3 )
    sub_604AE8A0(a1 + 1444);
  return sub_60459270(dword_60C9CFB8);
}
