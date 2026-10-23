/* sub_606E6DC8
 * address: 0x606E6DC8   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E6DC8(int a1)
{
  int v2; // r0
  _BYTE *v3; // r1
  int v4; // r0
  int v5; // r1
  _DWORD v7[3]; // [sp+0h] [bp-20h] BYREF
  int v8; // [sp+Ch] [bp-14h] BYREF

  FIELD_U8(a1, 6312) = 0;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = sub_6000389C(a1, (int)&v8);
  v3 = (_BYTE *)(a1 + 6315);
  if ( v2 )
  {
    if ( !*v3 )
    {
      *v3 = 1;
      v7[0] = FIELD_U32(a1, 108);
      v7[1] = v8;
      v7[2] = 1166843904;
      if ( (unsigned int)(v2 - 3) >= 2 )
      {
        if ( v2 == 5 )
          (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 120))(a1, v7);
        else
          (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 108))(a1, v7);
      }
      else
      {
        (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 112))(a1, v7);
      }
    }
  }
  else
  {
    *v3 = 0;
  }
  StageActor__cullCheck((StageActor *)a1, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 648))(a1);
  v4 = FIELD_U32(a1, 108);
  v5 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6324) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 6320) = v5;
  FIELD_U32(a1, 6316) = v4;
  return 1;
}
