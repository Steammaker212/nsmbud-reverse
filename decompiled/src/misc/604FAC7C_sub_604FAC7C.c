/* sub_604FAC7C
 * address: 0x604FAC7C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FAC7C(int a1, int a2, int a3)
{
  _DWORD *v5; // r5
  int **v6; // r1
  int v7; // r1
  void (*v8)(void); // r1

  FIELD_U8(a1, 3684) = 1;
  v5 = (_DWORD *)(a1 + 40);
  FIELD_U8(a1, 3687) = 0;
  FIELD_U32(a1, 4096) = a2;
  sub_60473DE4((_DWORD *)(a1 + 40), 3u, &dword_60CA6ECC, 0);
  v6 = *(int ***)(a1 + 3552);
  if ( FIELD_U32(a1, 3548) > 3u )
    v6 += 15;
  v7 = **v6;
  if ( a3 )
    v8 = *(void (**)(void))(v7 + 108);
  else
    v8 = *(void (**)(void))(v7 + 104);
  v8();
  StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA6EF4);
  return sub_60473B58(v5, 0xEu, 0);
}
