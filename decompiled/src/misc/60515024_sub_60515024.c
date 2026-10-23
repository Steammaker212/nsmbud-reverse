/* sub_60515024
 * address: 0x60515024   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60515024(int a1, int a2)
{
  int v4; // r0
  int *v5; // r1
  int v6; // r0
  int v7; // r0
  int v8; // r0
  unsigned int *v9; // r6
  int result; // r0
  _BYTE *v11; // r7
  StateMgr *v12; // r5
  _DWORD *v13; // r4
  _DWORD v14[8]; // [sp+8h] [bp-20h] BYREF

  v4 = FIELD_U32(a1, 14968);
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = off_60C5CB34;
  if ( v4 == 2 )
  {
    v5 = &dword_60CA869C;
  }
  else
  {
    if ( v4 != 3 )
      goto LABEL_8;
    v5 = &dword_60CA8694;
  }
  sead__SafeStringBase__operator_assign((int)v14, (int)v5);
  if ( sub_6047467C((_DWORD *)(a1 + 48), 0, v14, (int)&dword_60CA868C, 1.0, 0) == 1 )
  {
    v6 = sub_6047482C(a1 + 48, 0);
    if ( v6 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 104))(v6);
  }
LABEL_8:
  v7 = FIELD_U32(a1, 12924);
  if ( v7 )
    FIELD_U8(v7, 64) &= ~1u;
  v8 = FIELD_U32(a1, 12928);
  if ( v8 )
    FIELD_U8(v8, 64) &= ~1u;
  FIELD_U32(a1, 12932) = a2;
  v9 = (unsigned int *)(a1 + 12932);
  result = dword_60C99DD4;
  if ( !dword_60C99DD4 )
  {
    result = FIELD_U8(dword_60C99DEC, 524);
    if ( FIELD_U8(dword_60C99DEC, 524) )
    {
      result = FIELD_U8(a1, 14975);
      if ( !FIELD_U8(a1, 14975) )
      {
        FIELD_U8(a1, 14974) = 1;
        v11 = (_BYTE *)(a1 + 14974);
        v12 = (StateMgr *)(a1 + 24);
        StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA85A8);
        FIELD_U32(a1, 40) = &dword_60CA85E8;
        result = FIELD_U8(a1, 14974);
        if ( FIELD_U8(a1, 14974) )
        {
          v13 = (_DWORD *)(a1 + 48);
          do
          {
            StateMgr__execute(v12);
            sub_60473B58(v13, *v9, 0);
            result = (unsigned __int8)*v11;
          }
          while ( *v11 );
        }
      }
    }
  }
  return result;
}
