# LLM Research Scientist — 340-Item Training Program

A public, evidence-based interview and research preparation curriculum for **LLM Research Scientist** (Post-training / RL / Reasoning), built around **Bayesian uncertainty quantification (UQ)** and **cost-aware decision-making**.

## The 340-item curriculum

| Track | Count | File |
|---|---:|---|
| Coding / Python / LeetCode | 180 | [coding_180.csv](./coding_180.csv) |
| LLM theory and scientific interview questions | 120 | [science_120.csv](./science_120.csv) |
| Implementations, reproducible experiments, and research defense | 40 | [projects_40.csv](./projects_40.csv) |
| **Total** | **340** | |

**Research direction:** Bayesian UQ → calibrated LLM reward modeling → uncertainty-aware Post-training / RL → reliable cost-efficient reasoning agents.

## How the repository is used

- The authoritative progress ledger is [Google Sheets](https://docs.google.com/spreadsheets/d/1P5QgHlY9gdTVKlbOffBZDjmbkkDshsgIQ0KpTcXMAps/edit).
- Each completed Coding session should have independent code, actual Python test results, and a short failure / complexity analysis. Use [SESSION_TEMPLATE.md](./SESSION_TEMPLATE.md).
- Store future evidence in `solutions/`, `tests/`, `reviews/`, and project experiment folders as work is genuinely completed. Do not invent code or results to fill empty folders.
- Each substantive GitHub commit should be linked back to the corresponding Google Sheets exercise and training log. Mark mastered only after passing independent re-test and explanation.
- Start-of-track baseline: **LC1, LC49, LC217 and LC242 practiced**, not newly certified mastered. See [practice baseline](./reviews/practice-status-2026-10-21.md).

## Research identity (career narrative)

> I study Bayesian uncertainty quantification and cost-efficient decision-making. My experience in clinical-trial optimization motivates my work on reliable LLM post-training, reward modeling, and uncertainty-aware reinforcement learning.

The clinical-trial work is a differentiated research motivation; it does not substitute for general LLM experimental evidence.

## Limitations and provenance

- The CSVs were copied from the Google Sheets training ledger on **2026-10-21**.
- The Hot 100 and NeetCode 150 classification fields were **not fully independently verified**. Some LeetCode IDs are blank. Do not claim full official-list coverage without a separate audit.
- The number 340 counts *planned exercises*, not completed work or hiring qualification.
- This repository is **public**. Do not upload clinical patient data, unpublished collaborator findings, confidential documents, credentials or keys.

## Replacement of prior repository material

This repository previously held C++ interview solutions and a nested preparation directory. Its main-branch working tree was deliberately **replaced** by this 340-item curriculum on 2026-10-21 at the owner's request. The earlier files remain recoverable through Git history; the current root directory now represents the 340-item training program.
