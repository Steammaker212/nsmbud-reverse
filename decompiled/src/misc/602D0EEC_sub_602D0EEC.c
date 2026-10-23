/* sub_602D0EEC
 * address: 0x602D0EEC   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D0EEC(int a1)
{
  int v2; // r5
  __int16 *v3; // r6
  _DWORD *v4; // r5
  _DWORD *v5; // r5
  _DWORD *v6; // r5
  int v7; // r5
  int result; // r0
  __int16 v9; // r1
  int v10; // r3
  bool v11; // zf
  __int16 v12; // r1

  v2 = a1 + 6316;
  sub_602D1E50(a1 + 6316);
  v3 = (__int16 *)(a1 + 6556);
  if ( FIELD_S16(a1, 6556) > 0 )
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v2 + 24))(v2, 0);
  v4 = *(_DWORD **)(a1 + 6436);
  sub_602D1E50(v4);
  if ( *v3 > 1 )
    (*(void (__fastcall **)(_DWORD *, _DWORD))(*v4 + 24))(v4, 0);
  v5 = (_DWORD *)v4[30];
  sub_602D1E50(v5);
  if ( *v3 >= 3 )
    (*(void (__fastcall **)(_DWORD *, _DWORD))(*v5 + 24))(v5, 0);
  v6 = (_DWORD *)v5[30];
  sub_602D1E50(v6);
  if ( *v3 >= 4 )
    (*(void (__fastcall **)(_DWORD *, _DWORD))(*v6 + 24))(v6, 0);
  v7 = v6[30];
  sub_602D1E50(v7);
  if ( *v3 >= 5 )
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v7 + 24))(v7, 0);
  result = a1 + 6554;
  if ( FIELD_U16(a1, 6554) )
  {
    v9 = FIELD_U16(a1, 6554) - 1;
    *(_WORD *)result = v9;
  }
  else
  {
    v9 = 0;
  }
  v10 = FIELD_U32(a1, 6560);
  if ( v10 )
  {
    v11 = v10 == 1;
    if ( v10 == 1 )
    {
      result = 0xFFFF;
      v11 = v9 == 0;
    }
    if ( v11 )
      return (int)StageActor__delete((StateActor *)a1, 1);
  }
  else if ( !v9 )
  {
    v12 = *v3 + 1;
    *v3 = v12;
    if ( v12 < 5 )
    {
      *(_WORD *)result = 7;
    }
    else
    {
      *(_WORD *)result = 180;
      FIELD_U32(a1, 6560) = 1;
      return 1;
    }
  }
  return result;
}
