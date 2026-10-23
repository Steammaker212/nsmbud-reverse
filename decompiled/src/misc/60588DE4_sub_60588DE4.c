/* sub_60588DE4
 * address: 0x60588DE4   size: 2220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60588DE4(_DWORD *a1)
{
  unsigned int v2; // r0
  _DWORD *v3; // r6
  float v4; // s2
  float v5; // s0
  float v6; // s4
  float v7; // r0
  int v8; // r5
  int v9; // r0
  _BYTE *v10; // r0
  unsigned int v11; // r1
  int v12; // r2
  float v13; // s0
  char v14; // r12
  char *v15; // r11
  _DWORD *v16; // r10
  unsigned int v17; // r1
  bool v18; // zf
  MovementHandler *v19; // r5
  int v20; // r0
  ColliderBase *v21; // r9
  int v22; // r0
  int v23; // r0
  int v24; // r0
  StateBase *CurrentState; // r0
  int v26; // r7
  int v27; // r5
  int v28; // r0
  int v29; // r0
  int v30; // r5
  unsigned int v31; // r0
  int v32; // s2
  int v33; // r0
  bool v34; // zf
  int v35; // s0
  int *v37; // [sp+Ch] [bp-7Ch]
  int v38; // [sp+10h] [bp-78h]
  int *a2; // [sp+14h] [bp-74h]
  _BYTE v40[4]; // [sp+18h] [bp-70h] BYREF
  float v41; // [sp+1Ch] [bp-6Ch] BYREF
  int v42; // [sp+20h] [bp-68h]
  int v43; // [sp+24h] [bp-64h]
  int MaskForMovementType; // [sp+28h] [bp-60h]
  char v45; // [sp+2Ch] [bp-5Ch]
  int v46; // [sp+30h] [bp-58h]
  int v47; // [sp+34h] [bp-54h]
  int v48; // [sp+38h] [bp-50h]
  bool v49; // [sp+3Ch] [bp-4Ch]
  bool v50; // [sp+3Dh] [bp-4Bh]
  char v51; // [sp+3Eh] [bp-4Ah]
  int v52; // [sp+40h] [bp-48h]
  bool v53; // [sp+44h] [bp-44h]
  float v54[6]; // [sp+48h] [bp-40h] BYREF
  char v55; // [sp+60h] [bp-28h]

  v2 = a1[5];
  if ( (v2 & 0x80) != 0 )
  {
    v8 = 1;
    a1[1824] = 0;
    sub_6057A244((int)a1, 1);
    a1[1696] = 1090519040;
    a1[1697] = -1056964608;
    sub_60165340((int)(a1 + 1530), a1 + 1694, a1 + 1696);
    ColliderBase_setType((ColliderBase *)a1 + 18, 4);
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CAF338);
    return v8;
  }
  if ( v2 < 0x10000000 || FIELD_U32(dword_60C99DD4, 764) == 2 )
  {
    a1[1874] = 0;
    v3 = a1 + 1874;
    if ( Actor__getProfileId((Actor *)a1) == 414 )
      *v3 = 1;
    *((_BYTE *)a1 + 6876) = 1;
    a1[1847] = 3;
    *((_WORD *)a1 + 3688) = 0;
    *((_BYTE *)a1 + 7400) = 1;
    a1[1822] = 0;
    a1[1848] = (a1[5] >> 8) & 3;
    sub_60579AE4((int)a1);
    v4 = *((float *)a1 + 29) + -16.0;
    *((float *)a1 + 29) = v4;
    v5 = (float)(int)*((float *)a1 + 1745);
    *((float *)a1 + 1745) = v5;
    v6 = (float)(int)*((float *)a1 + 1746);
    *((float *)a1 + 1746) = v6;
    if ( a1[1848] )
    {
      *((float *)a1 + 1747) = v4;
      v7 = v4;
    }
    else
    {
      v7 = *((float *)a1 + 1747);
    }
    v54[0] = v5;
    v54[1] = v6;
    v54[2] = v7;
    v54[4] = 0.0;
    v54[5] = 0.0;
    v55 = FIELD_U8(LevelInfo_instance, 18);
    v9 = sub_605829C8(dword_60CAF15C, (int)v54);
    if ( v9 != 2 )
    {
      v38 = v9;
      a2 = a1 + 27;
      a1[1829] = 3;
      v11 = a1[6];
      v12 = (unsigned __int8)v11 >> 4;
      if ( *v3 )
        v12 = 9;
      a1[1825] = v12;
      a1[1826] = *((unsigned __int8 *)a1 + 28);
      a1[1827] = *((unsigned __int8 *)a1 + 29);
      a1[1871] = (a1[5] >> 5) & 1;
      a1[1878] = (v11 >> 28) & 1;
      *((float *)a1 + 27) = *((float *)a1 + 27) + 8.0;
      v13 = *((float *)a1 + 28) + -8.0;
      *((float *)a1 + 28) = v13;
      *((float *)a1 + 1842) = v13;
      *((float *)a1 + 1876) = v13;
      sub_6057A244((int)a1, 0);
      ColliderBase_setType((ColliderBase *)a1 + 18, 4);
      v15 = (char *)(a1 + 1826);
      v16 = a1 + 1871;
      v37 = a1 + 1825;
      v17 = a1[1825];
      v18 = v17 == 0;
      if ( v17 )
        v18 = *(_DWORD *)v15 == 0;
      if ( !v18 )
      {
        switch ( v17 )
        {
          case 1u:
            v41 = *((float *)a1 + 27);
            v42 = a1[28];
            v43 = a1[29];
            v19 = (MovementHandler *)(a1 + 1748);
            MaskForMovementType = MovementHandler__getMaskForMovementType((int)(a1 + 1748), 1u);
            v45 = *(_DWORD *)v15;
            v46 = 0;
            v47 = 0;
            v48 = 0;
            v20 = a1[5];
            v49 = (v20 & 0x4000000) != 0;
            v50 = (v20 & 0x8000000) != 0;
            v51 = HIBYTE(v20) & 1;
            v52 = 1;
            v53 = (v20 & 0x2000000) != 0;
            MovementHandler_initFromStruct((MovementHandler *)(a1 + 1748), (int *)&v41);
            break;
          case 2u:
            v19 = (MovementHandler *)(a1 + 1748);
            v22 = MovementHandler__getMaskForMovementType((int)(a1 + 1748), 2u);
            MovementHandler_init2((MovementHandler *)(a1 + 1748), (Vec3 *)a2, v22, *v15, a1[6] & 0xF, HIWORD(a1[6]) & 7);
            break;
          case 8u:
            a1[1786] = a1[6] & 0xF;
            goto LABEL_25;
          case 9u:
            v19 = (MovementHandler *)(a1 + 1748);
            v41 = 0.0;
            v42 = 0;
            v43 = 0;
            v24 = MovementHandler__getMaskForMovementType((int)(a1 + 1748), 9u);
            sub_606B0CCC(a1 + 1748, a2, v24, *v15, &v41, 0);
            break;
          default:
LABEL_25:
            v19 = (MovementHandler *)(a1 + 1748);
            v23 = MovementHandler__getMaskForMovementType((int)(a1 + 1748), v17);
            MovementHandler__link((MovementHandler *)(a1 + 1748), (Vec3 *)a2, v23, *v15);
            break;
        }
        v21 = (ColliderBase *)(a1 + 1530);
        MovementHandler__execute(v19);
        if ( a1[1760] != 1 || a1[1765] == 1 )
          goto LABEL_46;
        if ( *v3 == 1 )
        {
          CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 1521));
          v26 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v26 == (*(int (**)(void))(dword_60CAF2F8 + 8))() )
          {
            if ( a1[1791] )
            {
              a1[1824] = 31;
              (*(void (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60CAF318);
            }
          }
        }
        a1[27] = LODWORD(FIELD_U32(v19, 0x0).x);
        a1[28] = a1[1749];
        if ( *v37 == 1 && (*((_BYTE *)a1 + 23) & 2) != 0 )
        {
          v29 = 1780;
        }
        else
        {
          if ( *v16 )
          {
            v27 = a1[14];
            if ( ((unsigned int)&dword_60C7B364 & ~(1616417696 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
            {
              StageActor_RTTI = (int)&off_60BC0098;
              _cxa_guard_release(&dword_60C7B364);
            }
            if ( v27 && (**(int (__fastcall ***)(int, int *))v27)(v27, &StageActor_RTTI) == 1 )
            {
              v28 = a1[1873] + FIELD_U32(v27, 164);
LABEL_45:
              a1[41] = v28;
            }
LABEL_46:
            if ( *v16 )
            {
              v30 = a1[14];
              if ( ((unsigned int)&dword_60C7B364 & ~(1616417868 << v14) & 1) == 0
                && _cxa_guard_acquire(&dword_60C7B364) )
              {
                StageActor_RTTI = (int)&off_60BC0098;
                _cxa_guard_release(&dword_60C7B364);
              }
              if ( v30 && (**(int (__fastcall ***)(int, int *))v30)(v30, &StageActor_RTTI) == 1 )
              {
                v31 = sub_6000F7B8(
                        -(float)(FIELD_F32(v30, 112) - *((float *)a1 + 28)),
                        -(float)(FIELD_F32(v30, 108) - *((float *)a1 + 27)))
                    - 0x40000000;
                a1[41] = v31;
                a1[1873] = v31;
              }
            }
            if ( *v3 == 1 && a1[1791] )
            {
              (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CAF2F8);
            }
            else if ( v38 == 1 )
            {
              a1[1843] = 1;
              ColliderBase_setType(v21, 1);
              a1[1824] = 30;
              a1[1831] = 1;
              (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB10FC);
            }
            else
            {
              a1[1824] = 31;
              a1[1608] = sub_60589708;
              a1[1609] = sub_605897D4;
              a1[1610] = sub_605898A0;
              (*(void (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60CAF318);
            }
            a1[123] = 0;
            a1[124] = 1090519040;
            if ( *v3 == 1 )
            {
              v32 = 1159479296;
LABEL_72:
              v35 = v32;
              goto LABEL_73;
            }
            v33 = *v37;
            v34 = *v37 == 0;
            if ( *v37 )
              v34 = *(_DWORD *)v15 == 0;
            if ( v34 && !*v16 )
            {
              v32 = 1140850688;
              goto LABEL_72;
            }
            v35 = 1140850688;
            if ( v33 == 4 )
            {
              v32 = 1149239296;
            }
            else
            {
              if ( v33 != 1 )
              {
                v32 = 1149239296;
                goto LABEL_72;
              }
              v32 = 1157627904;
            }
LABEL_73:
            a1[125] = v32;
            a1[126] = v35;
            a1[127] = 1107296256;
            a1[128] = 1107296256;
            v41 = 128.0;
            v42 = 1132462080;
            sub_6069AFA0(a1 + 1810, a2, a1 + 123, &v41, v21);
            sub_605B2C10(a1);
            return 1;
          }
          v29 = 1768;
        }
        v28 = a1[v29];
        goto LABEL_45;
      }
      v21 = (ColliderBase *)(a1 + 1530);
      if ( a1[1878] )
      {
        a1[1877] = FIELD_U32(EnemyCounterMaybe_instance, 944);
        v41 = 0.0;
        ((void (__fastcall *)(_BYTE *, float *, int *, _DWORD))checkLiquidCollisions)(
          v40,
          &v41,
          a2,
          *((unsigned __int8 *)a1 + 86));
        *((float *)a1 + 28) = *((float *)a1 + 1876) + (float)(v41 - *((float *)a1 + 1877));
      }
      goto LABEL_46;
    }
  }
  v10 = (_BYTE *)a1[158];
  v8 = 2;
  if ( v10 )
    *v10 = 1;
  return v8;
}
