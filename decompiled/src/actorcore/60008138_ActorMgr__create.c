/* ActorMgr__create
 * address: 0x60008138   size: 396   group: actorcore
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall ActorMgr__create(void *this, ActorBuildInfo *buildInfo, int unk)
{
  _BYTE *v5; // r0
  int v6; // r5
  int zero; // r6
  int v8; // r1
  int v9; // r9
  unsigned int v10; // r0
  unsigned int v11; // r8

  v5 = (_BYTE *)sub_600082CC(this, buildInfo, 1);
  v6 = (int)v5;
  zero = 0;
  if ( !v5 )
    return (_BYTE *)zero;
  if ( v5[18] )
  {
    if ( unk != 1 )
    {
LABEL_4:
      if ( !unk )
      {
        sead__ListNode__insertFront((sead_ListNode *)this + 2865, (sead_ListNode *)(*((_DWORD *)this + 5733) + v6));
        ++*((_DWORD *)this + 5732);
      }
      return (_BYTE *)v6;
    }
LABEL_19:
    sub_60008458((sead_ListNode *)this, v6);
    return (_BYTE *)v6;
  }
  if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v5 + 16))(v5) )
  {
    v8 = FIELD_U32(v6, 4);
    if ( v8 )
      v9 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v8);
    else
      v9 = 1;
    v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6);
    v11 = 0;
    if ( v10 < 3 )
      v11 = 3 - v10;
    if ( v9 != 1 )
      sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v9);
    (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v6 + 24))(v6, v11);
    if ( v11 >= 2 && v11 != 3 )
    {
      zero = 0;
      if ( v11 != 2 )
        return (_BYTE *)zero;
      FIELD_U8(v6, 18) = 1;
      if ( unk != 1 )
        goto LABEL_4;
      goto LABEL_19;
    }
  }
  else
  {
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v6 + 24))(v6, 0);
  }
  FIELD_U8(v6, 19) = 1;
  sead__ListNode__insertFront((sead_ListNode *)this + 2867, (sead_ListNode *)(*((_DWORD *)this + 5737) + v6));
  ++*((_DWORD *)this + 5736);
  return 0;
}
