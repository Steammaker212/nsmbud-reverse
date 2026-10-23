/* sub_60691B4C
 * address: 0x60691B4C   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60691B4C(int a1)
{
  int v2; // r5
  int *v3; // r7
  int v4; // r0
  unsigned int v5; // r0
  int result; // r0
  StateBase *CurrentState; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r8
  bool v11; // zf

  v3 = (int *)(a1 + 6144);
  v2 = FIELD_U32(a1, 6144);
  v4 = FIELD_U32(a1, 6576);
  if ( v4 )
  {
    v5 = v2 + 83230720 + (v4 << 22);
LABEL_14:
    *v3 = v5;
    FIELD_U32(a1, 160) = (int)(float)((float)((float)(*(float *)((char *)sinLutTable + ((v5 >> 19) & 0xFF0))
                                                       + (float)((float)((float)((2 * v5) & 0xFFFFFE)
                                                                       * *(float *)((char *)&sinLutTable[1]
                                                                                  + ((v5 >> 19) & 0xFF0)))
                                                               * 0.000000059605))
                                               * 65536.0)
                                       * 34.0)
                          + FIELD_U32(a1, 6140);
    result = (int)(float)((float)((float)(*(float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0))
                                        + (float)((float)((float)(v5 & 0xFFFFFF)
                                                        * *(float *)((char *)&sinLutTable[1] + ((v5 >> 20) & 0xFF0)))
                                                * 0.000000059605))
                                * 65536.0)
                        * 100.0)
           + FIELD_U32(a1, 6136);
    FIELD_U32(a1, 164) = result;
    return result;
  }
  result = FIELD_U8(a1, 6572);
  if ( !FIELD_U8(a1, 6572) )
  {
    if ( !v2 )
      return result;
    v5 = v2 + 83230720;
    if ( ((v2 + 83230720) ^ v2) < 0 )
      v5 = 0;
    goto LABEL_14;
  }
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*(int (**)(void))(dword_60CB9028 + 8))() || (result = *v3) != 0 )
  {
    v9 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
    v11 = v10 == (*(int (**)(void))(dword_60CB9028 + 8))();
    v5 = v2 + 83230720;
    if ( !v11 )
      v5 = 0;
    if ( ((v2 + 83230720) ^ v2) >= 0 )
      v5 = v2 + 83230720;
    goto LABEL_14;
  }
  return result;
}
