/* sub_6059B720
 * address: 0x6059B720   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void ***__fastcall sub_6059B720(void ***a1, void **a2)
{
  void *v3; // r0
  int v4; // r0
  void **v5; // r0
  void **v6; // r5
  _DWORD **v7; // r5

  *a1 = a2;
  v3 = *a2;
  a1[1] = (void **)*a2;
  a1[2] = (void **)Resource_getModel2(v3, (sead__SafeString *)&off_60C07858, 1, 1, 1, 0, 0, 0, 0);
  v4 = operator_new(0x8Cu);
  v5 = (void **)SkeletalAnim_ctor(v4);
  a1[3] = v5;
  *((_WORD *)a1 + 8) = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  SkeletalAnim_init((int)v5, (int)a1[2], (int)a1[1], 0, 0);
  SkeletalAnim_play((int)a1[3], (int)a1[1], (const char **)&off_60C07860);
  v6 = a1[3];
  AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 1), 0);
  *((float *)v6 + 5) = *((float *)v6 + 2) + -1.0;
  v6[7] = (void *)((unsigned int)v6[7] | 2);
  v7 = (_DWORD **)(*a1)[3];
  (*((void (__fastcall **)(void **, _DWORD, void **))*a1[2] + 43))(a1[2], 0, a1[3]);
  (*((void (__fastcall **)(void **, _DWORD, _DWORD))*a1[2] + 45))(a1[2], 0, *v7[7]);
  (*((void (__fastcall **)(void **, _DWORD, _DWORD))*a1[2] + 44))(a1[2], 0, *v7[5]);
  return a1;
}
