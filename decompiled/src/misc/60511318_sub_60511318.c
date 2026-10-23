/* sub_60511318
 * address: 0x60511318   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60511318(int a1)
{
  int v2; // r5
  unsigned int v3; // r1
  unsigned int v4; // r0

  sub_6047F4A0((int *)(a1 + 9580));
  if ( FIELD_U8(a1, 9574) )
  {
    if ( (FIELD_U8(a1, 52) & 4) != 0 )
      StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CA8240);
    StateMgr__execute((StateMgr *)(a1 + 36));
    v2 = 0;
    v3 = FIELD_U32(a1, 9568);
    if ( v3 <= 3 )
    {
      if ( dword_60C9CFB8 )
      {
        v4 = sub_6045B330((__guard *)dword_60C9CFB8, v3) - 1;
        if ( v4 <= 4 )
          v2 = dword_60B03810[v4];
      }
    }
    if ( v2 != FIELD_U32(a1, 11612) )
    {
      FIELD_U32(a1, 11612) = v2;
      ((void (__fastcall *)(int))loc_6051141C)(a1);
    }
    sub_60507028(a1 + 5924);
    sub_6050229C(a1 + 3704);
    sub_60473B58((_DWORD *)(a1 + 56), FIELD_U32(a1, 9552), 0);
    sub_60402144(dword_60C99E68);
  }
  FIELD_U32(a1, 52) = 0;
  return 0;
}
