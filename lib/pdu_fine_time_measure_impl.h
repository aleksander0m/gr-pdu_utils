/* -*- c++ -*- */
/*
 * Copyright 2018, 2019, 2020 National Technology & Engineering Solutions of Sandia, LLC
 * (NTESS). Under the terms of Contract DE-NA0003525 with NTESS, the U.S. Government
 * retains certain rights in this software.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_PDU_UTILS_PDU_FINE_TIME_MEASURE_IMPL_H
#define INCLUDED_PDU_UTILS_PDU_FINE_TIME_MEASURE_IMPL_H

#include <pdu_utils/constants.h>
#include <pdu_utils/pdu_fine_time_measure.h>

namespace gr {
namespace pdu_utils {

class pdu_fine_time_measure_impl : public pdu_fine_time_measure
{
private:
    std::vector<float> d_magnitude_squared_f;
    float d_pre_burst_time;
    float d_post_burst_time;
    size_t d_average_size;
    float d_buffer_percent;

    void pdu_handler(pmt::pmt_t pdu);

public:
    /**
     * Constructor
     *
     * @param pre_burst_time -
     * @param post_burst_time -
     * @param average_width -
     * @param buffer_percent -
     */
    pdu_fine_time_measure_impl(float pre_burst_time,
                               float post_burst_time,
                               size_t average_width,
                               float buffer_percent);
    /**
     * Deconstructor
     */
    ~pdu_fine_time_measure_impl();
};

} // namespace pdu_utils
} // namespace gr

#endif /* INCLUDED_PDU_UTILS_PDU_FINE_TIME_MEASURE_IMPL_H */
