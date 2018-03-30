/*******************************************************************************
 * Project:  Nebula
 * @file     Step.cpp
 * @brief 
 * @author   Bwar
 * @date:    2016年8月12日
 * @note
 * Modify history:
 ******************************************************************************/
#include <actor/step/PbStep.hpp>

namespace neb
{

PbStep::PbStep(Step* pNextStep, ev_tstamp dTimeout)
    : Step(ACT_PB_STEP, pNextStep, dTimeout)
{
}

PbStep::PbStep(const tagChannelContext& stCtx, const MsgHead& oReqMsgHead, const MsgBody& oReqMsgBody, Step* pNextStep, ev_tstamp dTimeout)
    : Step(ACT_PB_STEP, pNextStep, dTimeout),
      m_stCtx(stCtx), m_oReqMsgHead(oReqMsgHead), m_oReqMsgBody(oReqMsgBody)
{
}

PbStep::~PbStep()
{
}

} /* namespace neb */