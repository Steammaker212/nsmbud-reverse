/* sub_60453F44
 * address: 0x60453F44   size: 944   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60453F44(int result)
{
  char v1; // r12
  int v2; // r8
  int v3; // r1
  int (__fastcall ****v4)(_DWORD, int *); // r5
  int (__fastcall ***v5)(_DWORD, int *); // r7
  int v6; // r0
  bool v7; // zf
  int v8; // r5
  int v9; // r0
  int v10; // r9
  int v11; // r0
  _BYTE **v12; // r11
  int v13; // r5
  _BYTE *v14; // r4
  int v15; // r0
  _BYTE **v16; // r5
  int v17; // r11
  int v18; // r0
  int v19; // [sp+4h] [bp-54h]
  int v20; // [sp+20h] [bp-38h]

  v2 = dword_60CCF448;
  if ( FIELD_U32(result, 1316) == 2 )
  {
    v3 = FIELD_U32(result, 1388);
    if ( v3 )
      FIELD_U8(result, 1405) = FIELD_U8(v3, 227);
    return result;
  }
  v20 = result;
  if ( FIELD_U32(dword_60CCF448, 212) )
  {
    v4 = *(int (__fastcall *****)(_DWORD, int *))(dword_60CCF448 + 220);
    do
    {
      v5 = *v4;
      if ( ((unsigned int)&dword_60C8C224 & ~(1615151060 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
      {
        dword_60C8C220 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C8C224);
      }
      v6 = (**v5)(v5, &dword_60C8C220);
      v7 = v5 == 0;
      if ( v5 )
        v7 = (v6 ^ 1) == 1;
      if ( !v7 )
        break;
      ++v4;
    }
    while ( v4 != (int (__fastcall ****)(_DWORD, int *))(FIELD_U32(v2, 220) + 4 * FIELD_U32(v2, 212)) );
  }
  LOBYTE(v19) = 0;
  v8 = v20;
  v9 = 0;
  do
  {
    while ( 1 )
    {
      v10 = v9;
      v7 = (FIELD_U32(v8, 1408) | v9) == 0;
      v11 = v8 + 4 * v9 + 1264;
      if ( v7 )
        v11 = v8 + 1280;
      if ( (*(_BYTE *)(*(_DWORD *)v11 + 272) & 0xF0) == 0 )
        break;
      if ( FIELD_U32(v2, 212) )
      {
        v12 = *(_BYTE ***)(v2 + 220);
        v13 = v10;
        do
        {
          v14 = *v12;
          if ( ((unsigned int)&dword_60C9CF14 & ~(1615151396 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CF14) )
          {
            dword_60C9CF10 = (int)&off_60BD84A8;
            _cxa_guard_release(&dword_60C9CF14);
          }
          v15 = (**(int (__fastcall ***)(_BYTE *, int *))v14)(v14, &dword_60C9CF10);
          if ( v14 && v15 == 1 )
          {
            if ( !v13 )
              goto LABEL_30;
            --v13;
          }
          ++v12;
        }
        while ( v12 != (_BYTE **)(FIELD_U32(v2, 220) + 4 * FIELD_U32(v2, 212)) );
        v14 = 0;
LABEL_30:
        v8 = v20;
        if ( v10 )
        {
LABEL_46:
          if ( v14 && (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v14 + 20))(v14) == 1 && v14[448] )
            v19 = (unsigned __int8)v19 | (1 << v10);
          break;
        }
      }
      else
      {
        v14 = 0;
        if ( v10 )
          goto LABEL_46;
      }
      if ( sub_6045B330(dword_60C9CFB8, 0) != 1 )
        goto LABEL_46;
      v9 = 1;
      if ( FIELD_U32(v2, 212) )
      {
        v16 = *(_BYTE ***)(v2 + 220);
        v17 = 4;
        while ( 1 )
        {
          v14 = *v16;
          if ( ((unsigned int)&dword_60C9CF14 & ~(1615151604 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CF14) )
          {
            dword_60C9CF10 = (int)&off_60BD84A8;
            _cxa_guard_release(&dword_60C9CF14);
          }
          v18 = (**(int (__fastcall ***)(_BYTE *, int *))v14)(v14, &dword_60C9CF10);
          if ( v14 && v18 == 1 )
          {
            if ( !v17 )
            {
              v8 = v20;
              goto LABEL_46;
            }
            --v17;
          }
          if ( ++v16 == (_BYTE **)(FIELD_U32(v2, 220) + 4 * FIELD_U32(v2, 212)) )
          {
            v8 = v20;
            goto LABEL_50;
          }
        }
      }
    }
LABEL_50:
    v9 = v10 + 1;
  }
  while ( v10 != 3 );
  result = FIELD_U8(v8, 1405);
  if ( result != (unsigned __int8)v19 )
  {
    FIELD_U8(v8, 1405) = v19;
    result = FIELD_U32(v8, 1388);
    if ( result )
      return sub_604564CC();
  }
  return result;
}
