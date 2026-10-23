/* sub_607F6028
 * address: 0x607F6028   size: 1340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607F6028(int a1, int a2, int a3, signed int a4)
{
  int v8; // r5
  int v9; // r5
  int v10; // r0
  int v11; // r5
  int v12; // r5
  char v13; // r12
  int (__fastcall *v14)(int); // r0
  bool v15; // zf
  int v16; // r5
  sead_IDisposer *(__fastcall *v17)(int); // r0
  int v18; // r5
  int (__fastcall *v19)(int); // r0
  int *v20; // r1
  int v21; // r0
  int v22; // r2
  int v23; // r0
  unsigned __int8 v24; // r6
  unsigned int v25; // r5
  int v26; // r5
  int v27; // r1
  _DWORD *v28; // r1
  int v29; // r1
  _BOOL4 v30; // r0
  int v31; // r0
  _DWORD v33[32]; // [sp+8h] [bp-1A8h] BYREF
  _DWORD v34[32]; // [sp+88h] [bp-128h] BYREF
  int v35[31]; // [sp+108h] [bp-A8h] BYREF
  int (__fastcall *v36)(int); // [sp+184h] [bp-2Ch]

  v8 = 0;
  if ( !FIELD_U32(a1, 92) && !sub_607EBD84(FIELD_U32(a1, 104)) )
  {
    v9 = 0;
    sub_608EF2B0(v34, a2, a3, 0);
    v10 = FIELD_U32(a2, 16);
    if ( v10 )
      v9 = FIELD_U32(v10, 16);
    v34[23] = v9;
    if ( *(_DWORD *)a3 == 2 && *(int (__fastcall **)(int))(a3 + 4) == sub_603FADF4 && !dword_60CC6C20 )
    {
      v35[0] = 2;
      v35[1] = (int)sub_607F6AC4;
      sub_608EF048(v33, v35);
      BYTE1(v33[5 * v33[22] + 6]) = 1;
      v11 = FIELD_U32(a1, 100);
      qmemcpy(v35, v33, sizeof(v35));
      v36 = (int (__fastcall *)(int))sub_6081A95C;
      v12 = sub_608F01B0(v11, v35);
      if ( ((unsigned int)&dword_60CC62EC & ~(1618960700 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60CC62EC) )
      {
        dword_60CC62E8 = (int)&off_60BF942C;
        _cxa_guard_release(&dword_60CC62EC);
      }
      if ( v12 )
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v12 + 8))(v12, &dword_60CC62E8);
    }
    if ( FIELD_U32(a2, 104) == 2 && *(int (__fastcall **)(int))(a2 + 108) == sub_603FADF4 )
    {
      if ( *(_DWORD *)a3 == 2 && *(int (__fastcall **)(int))(a3 + 4) == sub_600246FC )
        sub_6081AA8C(dword_60CC6C20);
      else
        sub_6081A990();
    }
    if ( *(_DWORD *)a3 == 2 )
    {
      v14 = *(int (__fastcall **)(int))(a3 + 4);
      v15 = v14 == sub_600246FC;
      if ( v14 != sub_600246FC )
        v15 = (char *)v14 == (char *)AreaTask_create;
      if ( v15 )
        goto LABEL_23;
    }
    v16 = sub_6081BA48();
    v34[5 * v34[22] + 4] = sub_608F61B0(4) + v16;
    if ( *(_DWORD *)a3 == 2 )
    {
LABEL_23:
      if ( *(int (__fastcall **)(int))(a3 + 4) == sub_600246FC )
      {
        if ( FIELD_U32(a2, 104) == 2 && *(int (__fastcall **)(int))(a2 + 108) == DemoScene_create )
        {
          a4 = 131074;
LABEL_39:
          FIELD_U32(dword_60CC62E4, 108) = a4;
          v28 = *(_DWORD **)(a1 + 104);
        }
        else
        {
          v22 = dword_60C99DD4 + 272;
          if ( !dword_60C99DD4 )
            v22 = dword_60C99DEC + 16;
          v23 = FIELD_U32(v22, 492);
          switch ( v23 )
          {
            case 0:
              v24 = FIELD_U8(LevelInfo_instance, 29);
              v25 = FIELD_U8(LevelInfo_instance, 28);
              if ( sub_6040E418(v25, v24) )
              {
                a4 = 786432;
                goto LABEL_39;
              }
              if ( sub_6040E394(v25, v24) )
              {
                a4 = 589832;
                FIELD_U32(dword_60CC62E4, 108) = 589832;
                v28 = *(_DWORD **)(a1 + 104);
              }
              else if ( sub_6040E48C(v25, v24) )
              {
                v28 = (_DWORD *)(FIELD_U32(a1, 104) + 8);
              }
              else
              {
                v30 = sub_6040E524(FIELD_U8(dword_60CC6D78, 424));
                v28 = *(_DWORD **)(a1 + 104);
                if ( v30 )
                  a4 = 2;
                else
                  v28 += 3;
              }
              break;
            case 1:
              if ( FIELD_U8(dword_60C9A1E0, 544) )
              {
                a4 = 589824;
                FIELD_U32(dword_60CC62E4, 108) = 589833;
                v28 = *(_DWORD **)(a1 + 104);
              }
              else
              {
                v28 = (_DWORD *)(FIELD_U32(a1, 104) + 20);
              }
              break;
            case 3:
              v28 = (_DWORD *)(FIELD_U32(a1, 104) + 32);
              break;
            case 4:
              v28 = (_DWORD *)(FIELD_U32(a1, 104) + 24);
              break;
            default:
              v29 = 0;
              if ( v23 == 2 )
                v29 = 7;
              v28 = (_DWORD *)(FIELD_U32(a1, 104) + 4 * v29);
              break;
          }
        }
        v34[25] = *v28;
        v18 = FIELD_U32(a1, 100);
        qmemcpy(v35, v34, sizeof(v35));
        v19 = sub_603F8094;
        goto LABEL_57;
      }
      v34[28] = a1 + 16;
      v17 = *(sead_IDisposer *(__fastcall **)(int))(a3 + 4);
      if ( v17 == AreaTask_create )
      {
        v34[25] = **(_DWORD **)(a1 + 104);
        v26 = FIELD_U32(a1, 100);
        qmemcpy(v35, v34, sizeof(v35));
        v36 = sub_603F14FC;
        if ( sub_608F0B94(v26, v35) == 1 )
        {
          v27 = v34[1];
          FIELD_U32(a1, 92) = v34[0];
          FIELD_U32(a1, 96) = v27;
LABEL_60:
          v8 = 1;
          FIELD_U8(a1, 112) = 0;
          return v8;
        }
        return 0;
      }
      if ( v17 == CourseSelectTask_create )
      {
        v34[25] = **(_DWORD **)(a1 + 104);
        v18 = FIELD_U32(a1, 100);
        qmemcpy(v35, v34, sizeof(v35));
        v19 = sub_601FD6B0;
LABEL_57:
        v36 = v19;
        v21 = v18;
        v20 = v35;
LABEL_58:
        if ( sub_608F0B94(v21, v20) == 1 )
        {
          v31 = v34[0];
          FIELD_U32(a1, 96) = v34[1];
          FIELD_U32(a1, 92) = v31;
          FIELD_U32(a1, 108) = a4;
          goto LABEL_60;
        }
        return 0;
      }
    }
    else
    {
      v34[28] = a1 + 16;
    }
    v20 = v34;
    v34[25] = **(_DWORD **)(a1 + 104);
    v21 = FIELD_U32(a1, 100);
    goto LABEL_58;
  }
  return v8;
}
