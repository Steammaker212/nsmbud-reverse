/* sub_60454344
 * address: 0x60454344   size: 1228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60454344(int a1)
{
  int result; // r0
  int v2; // r7
  char v3; // r12
  int v4; // r6
  int *v5; // r5
  int v6; // r9
  int v7; // r8
  int v8; // r0
  char v9; // r12
  int v10; // r10
  int *v11; // r5
  int v12; // r6
  int v13; // r0
  int v14; // r5
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // [sp+4h] [bp-8Ch]
  int v18; // [sp+8h] [bp-88h]
  int v19; // [sp+Ch] [bp-84h]
  int v20; // [sp+10h] [bp-80h]
  int v21; // [sp+14h] [bp-7Ch]
  int v22; // [sp+18h] [bp-78h]
  int v23; // [sp+1Ch] [bp-74h]
  int v24; // [sp+20h] [bp-70h]
  _BYTE *v26; // [sp+50h] [bp-40h]

  result = FIELD_U8(dword_60C9A230, 2084);
  if ( !FIELD_U8(dword_60C9A230, 2084) )
  {
    result = FIELD_U32(a1, 1316);
    if ( result != 2 )
    {
      v20 = 0;
      v17 = 0;
      v24 = 0;
      v23 = 0;
      v26 = (_BYTE *)(dword_60C99DD4 + 272);
      v22 = 0;
      v19 = 0;
      v21 = 0;
      v18 = 0;
      result = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v2 = result;
          if ( result < sub_603FD0B4(v26) )
            break;
LABEL_50:
          result = v2 + 1;
          if ( v2 == 3 )
            return result;
        }
        v4 = dword_60CCF448;
        if ( FIELD_U32(dword_60CCF448, 212) )
        {
          v5 = *(int **)(dword_60CCF448 + 220);
          v6 = v2;
          do
          {
            v7 = *v5;
            if ( ((unsigned int)&dword_60C8C224 & ~(1615152348 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
            {
              dword_60C8C220 = (int)&off_60BD84A8;
              _cxa_guard_release(&dword_60C8C224);
            }
            v8 = (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C8C220);
            if ( v7 && v8 == 1 )
            {
              if ( !v2 )
                goto LABEL_16;
              --v2;
            }
            ++v5;
          }
          while ( v5 != (int *)(FIELD_U32(v4, 220) + 4 * FIELD_U32(v4, 212)) );
          v7 = 0;
LABEL_16:
          v2 = v6;
          if ( v6 )
          {
LABEL_31:
            if ( v7 && (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7) == 1 )
            {
              v14 = FIELD_U8(v7, 353);
              v15 = a1 + 4 * v2 + 1264;
              if ( !(FIELD_U32(a1, 1408) | v2) )
                v15 = a1 + 1280;
              if ( (*(_BYTE *)(*(_DWORD *)v15 + 272) & 0xF0) != 0 )
                *(_BYTE *)(a1 + v2 + 5130) = sqrtf(
                                               (float)(FIELD_F32(v7, 288) * FIELD_F32(v7, 288))
                                             + (float)(FIELD_F32(v7, 284) * FIELD_F32(v7, 284))) > 0.3;
              switch ( v14 )
              {
                case 0:
                  if ( *(_BYTE *)(a1 + v2 + 5130) )
                    ++v22;
                  else
                    ++v19;
                  break;
                case 1:
                  if ( *(_BYTE *)(a1 + v2 + 5130) )
                    ++v21;
                  else
                    ++v18;
                  break;
                case 2:
                  if ( *(_BYTE *)(a1 + v2 + 5130) )
                    ++v20;
                  else
                    ++v17;
                  break;
                case 3:
                  ++v23;
                  break;
                case 4:
                  ++v24;
                  break;
                default:
                  break;
              }
              v16 = (_DWORD *)dword_60C9CFB8;
              FIELD_U32(dword_60C9CFB8, 40) = v22;
              v16[11] = v19;
              v16[12] = v21;
              v16[13] = v18;
              v16[14] = v20;
              v16[15] = v17;
              v16[16] = v23;
              v16[17] = v24;
            }
            goto LABEL_50;
          }
        }
        else
        {
          v7 = 0;
          if ( v2 )
            goto LABEL_31;
        }
        if ( sub_6045B330(dword_60C9CFB8, 0) != 1 )
          goto LABEL_31;
        v10 = dword_60CCF448;
        result = 1;
        if ( FIELD_U32(dword_60CCF448, 212) )
        {
          v11 = *(int **)(dword_60CCF448 + 220);
          v12 = 4;
          do
          {
            v7 = *v11;
            if ( ((unsigned int)&dword_60C8C224 & ~(1615152560 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
            {
              dword_60C8C220 = (int)&off_60BD84A8;
              _cxa_guard_release(&dword_60C8C224);
            }
            v13 = (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C8C220);
            if ( v7 && v13 == 1 )
            {
              if ( !v12 )
                goto LABEL_31;
              --v12;
            }
            ++v11;
          }
          while ( v11 != (int *)(FIELD_U32(v10, 220) + 4 * FIELD_U32(v10, 212)) );
          goto LABEL_50;
        }
      }
    }
  }
  return result;
}
