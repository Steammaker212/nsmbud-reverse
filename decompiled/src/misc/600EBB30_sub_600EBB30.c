/* sub_600EBB30
 * address: 0x600EBB30   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600EBB30(int a1)
{
  int v2; // r11
  int v3; // r6
  _DWORD *v4; // r8
  _BYTE *v5; // r9
  signed int result; // r0
  bool v7; // zf
  int v8; // r5

  v2 = 0;
  v3 = a1 + 8200;
  v4 = (_DWORD *)(a1 + 8196);
  v5 = (_BYTE *)(a1 + 8132);
  do
  {
    *(_BYTE *)(v3 + v2) = 0;
    result = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32);
    v7 = result == 0;
    if ( result )
      v7 = (FIELD_U8(result, 3552) & 1) == 0;
    if ( !v7 && FIELD_U8(result, 532) == FIELD_U8(a1, 532) )
    {
      Player_stun(result, 1);
      v8 = a1;
      if ( *v5 )
        v8 = FIELD_U32(a1, 56);
      if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 716))(v8) )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 720))(v8);
      *v4 = 90;
      result = 1;
      *(_BYTE *)(v3 + v2) = 1;
    }
    ++v2;
  }
  while ( v2 != 4 );
  return result;
}
