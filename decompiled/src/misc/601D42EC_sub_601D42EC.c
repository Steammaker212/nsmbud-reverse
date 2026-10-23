/* sub_601D42EC
 * address: 0x601D42EC   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D42EC(int a1)
{
  _DWORD *v2; // r5
  StateBase *v3; // r1
  int v4; // r6
  _BOOL4 v6; // r0
  bool v7; // zf
  int v8; // r1

  v2 = (_DWORD *)(a1 + 1032);
  if ( sub_601D9D84(a1 + 1032) == 1 )
  {
    v3 = (StateBase *)&dword_60C8A9BC;
LABEL_5:
    sub_601B1FA4(a1, v3);
    return 1;
  }
  if ( sub_601E1398(v2) == 1 )
  {
    sub_601D1A14(a1);
    v3 = (StateBase *)&unk_60C8AA94;
    goto LABEL_5;
  }
  v4 = 0;
  if ( sub_601D1204(a1) == 1 && sub_60220244(dword_60C8D4EC) >= 1 && !sub_601C6AA0(a1) )
  {
    v6 = sub_60190968(dword_60C8996C);
    v7 = !v6;
    if ( !v6 )
      v7 = (FIELD_U8(a1, 1121) & 1) == 0;
    if ( v7 )
    {
      v8 = sub_60169A30(v2);
      if ( v8 )
      {
        sub_601D1400(a1, v8);
        FIELD_U32(a1, 1120) |= 0x100u;
        sub_601B2EF0(a1, (int)v2);
        sub_601B3F54(a1);
        return 1;
      }
    }
  }
  return v4;
}
