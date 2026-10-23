/* sub_604857C4
 * address: 0x604857C4   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604857C4(int a1)
{
  int v2; // r0
  _DWORD *v3; // r0
  int v4; // r0
  char v5; // r0

  v2 = FIELD_U32(a1, 32);
  if ( v2 == 1 )
  {
    v3 = *(_DWORD **)(a1 + 16);
    if ( *(_BYTE *)(*v3 + 160) )
    {
      FIELD_U32(a1, 20) = 0;
      sub_604DE988(a1);
      sub_6047EBB4(a1 + 24, **(_DWORD **)(a1 + 16));
      v3 = *(_DWORD **)(a1 + 16);
    }
    if ( *(_BYTE *)(v3[1] + 160) )
    {
      FIELD_U32(a1, 20) = 1;
      sub_604DE988(a1);
      sub_6047EBB4(a1 + 24, *(_DWORD *)(FIELD_U32(a1, 16) + 4));
      v3 = *(_DWORD **)(a1 + 16);
    }
    if ( *(_BYTE *)(v3[2] + 160) )
    {
      FIELD_U32(a1, 20) = 2;
      sub_604DE988(a1);
      sub_6047EBB4(a1 + 24, *(_DWORD *)(FIELD_U32(a1, 16) + 8));
      v3 = *(_DWORD **)(a1 + 16);
    }
    if ( *(_BYTE *)(v3[3] + 160) )
    {
      FIELD_U32(a1, 20) = 3;
      sub_604DE988(a1);
      sub_6047EBB4(a1 + 24, *(_DWORD *)(FIELD_U32(a1, 16) + 12));
      v3 = *(_DWORD **)(a1 + 16);
    }
    if ( *(_BYTE *)(v3[4] + 160) )
    {
      FIELD_U32(a1, 20) = 4;
      sub_604DE988(a1);
      sub_6047EBB4(a1 + 24, *(_DWORD *)(FIELD_U32(a1, 16) + 16));
      v3 = *(_DWORD **)(a1 + 16);
    }
    if ( *(_BYTE *)(v3[5] + 160) )
    {
      FIELD_U32(a1, 20) = 5;
      sub_604DE988(a1);
      sub_6047EBB4(a1 + 24, *(_DWORD *)(FIELD_U32(a1, 16) + 20));
      v3 = *(_DWORD **)(a1 + 16);
    }
    if ( *(_BYTE *)(v3[6] + 160) )
    {
      FIELD_U32(a1, 20) = 6;
      sub_604DE988(a1);
      sub_6047EBB4(a1 + 24, *(_DWORD *)(FIELD_U32(a1, 16) + 24));
      v3 = *(_DWORD **)(a1 + 16);
    }
    if ( *(_BYTE *)(v3[7] + 160) )
    {
      FIELD_U32(a1, 20) = 7;
      sub_604DE988(a1);
      sub_6047EBB4(a1 + 24, *(_DWORD *)(FIELD_U32(a1, 16) + 28));
    }
    v2 = FIELD_U32(a1, 32);
  }
  if ( !v2 )
  {
    v4 = FIELD_U32(a1, 92);
    if ( (v4 & 0x10) != 0 )
    {
      sub_60486518(a1, FIELD_U32(a1, 608), FIELD_U32(a1, 604), 1);
    }
    else if ( (v4 & 0x20) != 0 )
    {
      sub_604865C0(a1, FIELD_U32(a1, 608), FIELD_U32(a1, 604), 1);
    }
    else if ( (v4 & 0x2000) != 0 )
    {
      sub_6047EBC4(a1 + 24);
    }
  }
  if ( FIELD_U32(a1, 32) == 3 )
  {
    sub_604020F0((_BYTE *)dword_60C99E68, 2u);
    v5 = 1;
    switch ( FIELD_U32(a1, 20) )
    {
      case 0:
      case 2:
      case 4:
      case 6:
        goto LABEL_29;
      case 1:
      case 3:
      case 5:
      case 7:
        v5 = 0;
LABEL_29:
        FIELD_U8(a1, 598) = v5;
        break;
      default:
        break;
    }
    FIELD_U8(a1, 597) = 1;
    StateMgr__changeState((StateMgr *)(a1 + 532), (StateBase *)&dword_60C9F340);
  }
  return sub_604DEA24(a1);
}
