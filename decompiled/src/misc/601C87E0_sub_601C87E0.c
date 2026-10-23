/* sub_601C87E0
 * address: 0x601C87E0   size: 1772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C87E0(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r1
  char v7; // r12
  float *v8; // r8
  void *v9; // r6
  const void *v10; // r10
  signed int v11; // r5
  bool v12; // cc
  float *v13; // r8
  void *v14; // r6
  const void *v15; // r10
  signed int v16; // r5
  int (**v17)(); // [sp+8h] [bp-58h] BYREF
  _BYTE *v18; // [sp+Ch] [bp-54h]
  int v19; // [sp+10h] [bp-50h]
  _BYTE v20[32]; // [sp+14h] [bp-4Ch] BYREF
  _DWORD v21[11]; // [sp+34h] [bp-2Ch] BYREF

  result = FIELD_U32(a1, 1012);
  switch ( result )
  {
    case 0:
      if ( FIELD_U32(a1, 1208) == 7 )
      {
        v3 = FIELD_U32(a1, 1124);
        if ( v3 < 0 )
        {
          if ( (*(_BYTE *)(sub_601918EC(dword_60C8996C) + 308) & 2) != 0 )
            FIELD_U32(a1, 1012) = 10;
        }
        else if ( v3 > FIELD_U32(a1, 336) - FIELD_U32(a1, 340) )
        {
          *(_BYTE *)(sub_601918EC(dword_60C8996C) + 308) = 0;
          sub_607F68AC(dword_60CC62E4, 0);
          FIELD_U32(dword_60CC62E4, 128) = 30;
          sub_6080A1A0(SoundSystem_instance, 30);
          FIELD_U32(a1, 1124) = -1;
        }
        result = sub_601C7FD4(a1);
      }
      else
      {
        result = sub_601C7FD4(a1);
        if ( result == 1 )
        {
          sub_601D9A30(a1);
          FIELD_U32(a1, 1124) = 30;
          result = 1;
          FIELD_U32(a1, 1012) = 1;
        }
      }
      FIELD_F32(a1, 996) = sqrtf(
                               (float)(FIELD_F32(a1, 124) * FIELD_F32(a1, 124))
                             + (float)(FIELD_F32(a1, 116) * FIELD_F32(a1, 116)));
      return result;
    case 1:
      v4 = FIELD_U32(a1, 1124);
      if ( v4 >= 1 )
        goto LABEL_26;
      *(_BYTE *)(sub_601918EC(dword_60C8996C) + 308) = 0;
      sub_607F68AC(dword_60CC62E4, 0);
      FIELD_U32(dword_60CC62E4, 128) = 30;
      sub_6080A1A0(SoundSystem_instance, 30);
      result = 2;
      goto LABEL_56;
    case 2:
      result = *(unsigned __int8 *)(sub_601918EC(dword_60C8996C) + 308);
      if ( (result & 2) == 0 )
        return result;
      result = 10;
      goto LABEL_56;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
      return result;
    case 10:
      sub_601C8F58(a1, a1 + 80);
      memset(v21, 255, 12);
      sub_601E06F0(FIELD_U32(a1, 1208), v21);
      v5 = (_DWORD *)sub_601DFFE4(v21);
      FIELD_U32(a1, 1032) = v5[21];
      v6 = v5[22];
      FIELD_U32(a1, 1036) = v6;
      FIELD_U32(a1, 1040) = v5[24];
      FIELD_U32(a1, 1092) = 5;
      FIELD_U32(a1, 1216) = 1;
      sub_6021D508(dword_60C8D408, v6);
      if ( FIELD_U32(a1, 1032) == 7 )
      {
        if ( ((unsigned int)dword_60C8AED0 & ~(1612483212 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60C8AED0) )
        {
          dword_60C8AED8 = (int)&sead__SafeStringBase__vtable;
          dword_60C8AEDC = (int)"W8M0";
          _cxa_guard_release(dword_60C8AED0);
        }
        v8 = (float *)sub_601918EC(dword_60C8996C);
        v18 = v20;
        v17 = &BufferedSafeStringBase_char_vtable_probably;
        v19 = 32;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17);
        v17 = &off_60BD4C38;
        v9 = v18;
        (*(void (__fastcall **)(int *))(dword_60C8AED8 + 12))(&dword_60C8AED8);
        v10 = (const void *)dword_60C8AEDC;
        if ( v9 != (void *)dword_60C8AEDC )
        {
          (*(void (__fastcall **)(int *))(dword_60C8AED8 + 12))(&dword_60C8AED8);
          v11 = 0;
          while ( 1 )
          {
            if ( !*(_BYTE *)(dword_60C8AEDC + v11) )
              goto LABEL_46;
            if ( !*(_BYTE *)(dword_60C8AEDC + v11 + 1) )
            {
              ++v11;
              goto LABEL_46;
            }
            if ( !*(_BYTE *)(dword_60C8AEDC + v11 + 2) )
              break;
            v12 = v11 + 2 <= 0x7FFFF;
            v11 += 3;
            if ( !v12 )
            {
              v11 = 0;
              goto LABEL_46;
            }
          }
          v11 += 2;
LABEL_46:
          if ( v11 >= v19 )
            v11 = v19 - 1;
          qmemcpy(v9, v10, v11);
          *((_BYTE *)v9 + v11) = 0;
        }
        v17 = &off_60BD4C20;
        sub_6018F98C(v8, &v17, 7u, 1u, 30.0, 2, 1);
        FIELD_U32(a1, 1124) = 90;
        result = 50;
        goto LABEL_56;
      }
      if ( ((unsigned int)&dword_60C8AED0[1] & ~(1612483652 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AED0[1]) )
      {
        dword_60C8AEE0 = (int)&sead__SafeStringBase__vtable;
        dword_60C8AEE4 = (int)"F001";
        _cxa_guard_release(&dword_60C8AED0[1]);
      }
      v13 = (float *)sub_601918EC(dword_60C8996C);
      v18 = v20;
      v17 = &BufferedSafeStringBase_char_vtable_probably;
      v19 = 32;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17);
      v17 = &off_60BD4C38;
      v14 = v18;
      (*(void (__fastcall **)(int *))(dword_60C8AEE0 + 12))(&dword_60C8AEE0);
      v15 = (const void *)dword_60C8AEE4;
      if ( v14 == (void *)dword_60C8AEE4 )
        goto LABEL_55;
      (*(void (__fastcall **)(int *))(dword_60C8AEE0 + 12))(&dword_60C8AEE0);
      v16 = 0;
      break;
    case 20:
      result = *(unsigned __int8 *)(sub_601918EC(dword_60C8996C) + 308);
      if ( (result & 1) == 0 )
        return result;
      FIELD_U32(dword_60CC6D78, 444) = FIELD_U32(dword_60CC6D78, 412);
      result = 100;
      goto LABEL_56;
    case 50:
      v4 = FIELD_U32(a1, 1124);
      if ( v4 >= 1 )
      {
LABEL_26:
        result = v4 - 1;
        FIELD_U32(a1, 1124) = result;
        return result;
      }
      result = 100;
      goto LABEL_56;
    default:
      if ( result == 100 )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      return result;
  }
  while ( *(_BYTE *)(dword_60C8AEE4 + v16) )
  {
    if ( !*(_BYTE *)(dword_60C8AEE4 + v16 + 1) )
    {
      ++v16;
      break;
    }
    if ( !*(_BYTE *)(dword_60C8AEE4 + v16 + 2) )
    {
      v16 += 2;
      break;
    }
    v12 = v16 + 2 <= 0x7FFFF;
    v16 += 3;
    if ( !v12 )
    {
      v16 = 0;
      break;
    }
  }
  if ( v16 >= v19 )
    v16 = v19 - 1;
  qmemcpy(v14, v15, v16);
  *((_BYTE *)v14 + v16) = 0;
LABEL_55:
  v17 = &off_60BD4C20;
  sub_6018F98C(v13, &v17, 8u, 1u, 30.0, 2, 1);
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  result = 20;
LABEL_56:
  FIELD_U32(a1, 1012) = result;
  return result;
}
