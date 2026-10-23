/* sub_606153B0
 * address: 0x606153B0   size: 1528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606153B0(int a1)
{
  char v1; // r12
  int v2; // r6
  _DWORD *v3; // r7
  int *v4; // r5
  int (__fastcall ***v5)(_DWORD, int *); // r4
  int v6; // r0
  char v7; // r12
  int v8; // r1
  int v9; // r11
  int v10; // r4
  int (__fastcall ***v11)(_DWORD, int *); // r6
  int *v12; // r4
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r11
  int v17; // r9
  int (__fastcall ***v18)(_DWORD, int *); // r6
  void (__fastcall *v19)(int, void *); // r2
  int v20; // r0
  int v21; // r0
  float v22; // s2
  float v23; // s0
  float v24; // s2
  int v25; // r2
  float v26; // s4
  int v27; // r2
  float v28; // s4
  int v29; // r2
  float v30; // s4
  int v31; // r0
  float v32; // s4
  _DWORD *v33; // [sp+4h] [bp-3Ch]

  v2 = 0;
  v3 = (_DWORD *)(a1 + 7600);
  v4 = (int *)(a1 + 7604);
  do
  {
    if ( (*v4 & (1 << v2)) == 0 && (*v3 & (1 << v2)) != 0 )
    {
      v5 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v2 + 48);
      if ( ((unsigned int)&dword_60C7B37C & ~(1616991316 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v5 && (**v5)(v5, &dword_60C7B378) == 1 && !sub_6076CE2C(v5) )
        *v3 &= ~byte_60B06544[v2];
    }
    ++v2;
  }
  while ( v2 != 4 );
  if ( *v3 )
  {
    v6 = sub_6078A030(PlayerMgr_instance);
    v8 = *v4;
    if ( v6 <= 1 )
    {
      v16 = 0;
      v17 = 1;
      v33 = (_DWORD *)(a1 + 7548);
      do
      {
        if ( (v8 & v17) == 0 && (*v3 & v17) != 0 )
        {
          v18 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v16 + 48);
          if ( ((unsigned int)&dword_60C7B37C & ~(1616992068 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( v18 && (**v18)(v18, &dword_60C7B378) == 1 && sub_6076CE2C(v18) == 1 )
          {
            FIELD_U8(a1, 7580) = 1;
            ((void (__fastcall *)(int, int (__fastcall ***)(_DWORD, int *), _DWORD))loc_6061515C)(
              a1,
              v18,
              (unsigned __int8)v16);
            *v4 |= v17;
            *v33 = 90;
          }
        }
        v8 = *v4;
        ++v16;
        v17 *= 2;
      }
      while ( v16 != 4 );
      if ( v8 )
      {
        *v33 = 0;
        FIELD_U32(dword_60CBFA90, 60) |= 0x40u;
        sub_60614478(a1);
        v19 = *(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
        v20 = a1;
LABEL_64:
        v19(v20, &unk_60CB317C);
      }
    }
    else
    {
      v9 = 0;
      if ( !v8 )
        FIELD_U32(a1, 7548) = 180;
      v10 = 1;
      if ( (v8 & 1) == 0 )
        goto LABEL_21;
LABEL_19:
      while ( v9 != 3 )
      {
        while ( 1 )
        {
          ++v9;
          v10 *= 2;
          if ( (*v4 & v10) != 0 )
            break;
LABEL_21:
          if ( (*v3 & v10) == 0 )
            goto LABEL_19;
          v11 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v9 + 48);
          if ( ((unsigned int)&dword_60C7B37C & ~(1616991688 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( !v11 || (**v11)(v11, &dword_60C7B378) != 1 || sub_6076CE2C(v11) != 1 )
            goto LABEL_19;
          FIELD_U8(a1, 7580) = 1;
          ((void (__fastcall *)(int, int (__fastcall ***)(_DWORD, int *), _DWORD))loc_6061515C)(
            a1,
            v11,
            (unsigned __int8)v9);
          *v4 |= v10;
          if ( v9 == 3 )
            goto LABEL_29;
        }
      }
LABEL_29:
      v12 = (int *)(a1 + 7548);
      v13 = sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66));
      v14 = *v4;
      v15 = *v4 & 1;
      if ( v13 == (((unsigned int)*v4 >> 1) & 1) + v15 + (((unsigned int)*v4 >> 2) & 1) + (((unsigned int)*v4 >> 3) & 1) )
      {
        *v12 = 0;
        FIELD_U8(a1, 7609) = 1;
      }
      else if ( *v12 )
      {
        v21 = *v12 - 1;
        *v12 = v21;
        if ( v21 )
          return;
      }
      v22 = FIELD_F32(a1, 108);
      v23 = v22 + 16.0;
      v24 = v22 + -16.0;
      if ( v15
        || (v25 = FIELD_U32(PlayerMgr_instance, 48)) == 0
        || (v26 = FIELD_F32(v25, 108), v26 < v24)
        || v26 > v23 )
      {
        if ( (v14 & 2) != 0
          || (v27 = FIELD_U32(PlayerMgr_instance, 52)) == 0
          || (v28 = FIELD_F32(v27, 108), v28 < v24)
          || v28 > v23 )
        {
          if ( (v14 & 4) != 0
            || (v29 = FIELD_U32(PlayerMgr_instance, 56)) == 0
            || (v30 = FIELD_F32(v29, 108), v30 < v24)
            || v30 > v23 )
          {
            if ( (v14 & 8) != 0 )
              goto LABEL_63;
            v31 = FIELD_U32(PlayerMgr_instance, 60);
            if ( !v31 )
              goto LABEL_63;
            v32 = FIELD_F32(v31, 108);
            if ( v32 < v24 || v32 > v23 )
              goto LABEL_63;
          }
        }
      }
      if ( FIELD_U8(a1, 7609) )
      {
LABEL_63:
        FIELD_U32(dword_60CBFA90, 60) |= 0x40u;
        sub_60614478(a1);
        v19 = *(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
        v20 = a1;
        goto LABEL_64;
      }
      *v12 = 30;
      FIELD_U8(a1, 7609) = 1;
    }
  }
}
